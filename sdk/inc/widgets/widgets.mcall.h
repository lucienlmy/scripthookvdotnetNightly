#pragma once

stdstr base64encode(const void *data, int size);
stdstr u16str(const wchar_t *lpszwstr);
stdstr callDartInner(const stdstr &data);

class ManagedCall
{
	// TODO: inplace encryption of simple param values
	stdstr data, clname, mtname;
	void param(stdstr name, stdstr value) {
		data.append("\"" + name + "\":" + value + ",");
	}
	stdop<stdstr> method() {
		if (data.back() == ',') {
			data.back() = '}';
			data.append("}");
		} else
		if (data.back() == '{') {
			data.append("}");
			data.append("}");
		}
		// managed call
		stdstr result = callDartInner(data);
		__ASSERT(result.size() >= 2);
		__ASSERT(result[0] >= '0' && result[0] <= '2' && result[1] == ';');
		const char *value = result.c_str() + 2;
		if (result[0] == '0') return stdop<stdstr>();
		if (result[0] == '1') return value;
		__ASSERT_THROW(false, clname + "::" + mtname + "()\n\n" + value);
		return "";
	}
	int64 res_int64(stdstr str) {
		int64 result = 0;
		sscanf_s(str.c_str(), "%lld", &result);
		return result;
	}
	double res_double(stdstr str) {
		double result = 0.0;
		sscanf_s(str.c_str(), "%lld", (int64 *)&result);
		return result;
	}
public:
	ManagedCall(stdstr className, stdstr methodName) {
		extern HMODULE moduleHandle;
		clname = className;
		mtname = methodName;
		data.reserve(1024);
		data.append("{");
		data.append("\"module\":" + to_str((int64)moduleHandle) + ",");
		data.append("\"class\":\"" + className + "\",");
		data.append("\"method\":\"" + methodName + "\",");
		data.append("\"params\":{");
	}
	void put(stdstr name, bool val) {
		param(name, val ? "1" : "0");
	}
	void put(stdstr name, int val) {
		param(name, to_str(val));
	}
	void put(stdstr name, int64 val) {
		param(name, to_str(val));
	}
	void put(stdstr name, double val) {
		param(name, to_str(*(int64 *)&val));
	}
	void put(stdstr name, stdstr str) {
		param(name, "\"" + base64encode(str.c_str(), (int)strlen(str.c_str())) + "\"");
	}
	void put(stdstr name, stdop<bool> val) {
		param(name, val.has_value() ? (val.value() ? "1" : "0") : "null");
	}
	void put(stdstr name, stdop<int64> val) {
		param(name, val.has_value() ? to_str(val.value()) : "null");
	}
	void put(stdstr name, stdop<double> val) {
		if (val.has_value()) put(name, val.value()); else param(name, "null");
	}
	void put(stdstr name, stdop<stdstr> str) {
		if (str.has_value()) put(name, str.value()); else param(name, "null");
	}
	void put(stdstr name, void *val) {
		put(name, (int64)val);
	}
	void put(stdstr name, ObjBase *val) {
		put(name, val ? val->shared<ObjBase>() : nullptr);
	}
	#define __ASSERT_MUST_HAVE_VALUE(cond) \
		__ASSERT_THROW((cond), clname + "::" + mtname + "()\n\nparam '" + name + "' must have value");
	template<class R, class ...Ts> void put(stdstr name, stdfunc<R(Ts...)> cb, bool mustHaveValue = false) {
		__ASSERT_MUST_HAVE_VALUE(!mustHaveValue || cb != nullptr);
		auto cbname = ((clname == mtname) ? clname : (clname + "." + mtname)) + "(." + name + ")";
		put(name, cb ? Callback::ctorMain(cbname, cb) : nullptr, mustHaveValue);
	}
	template<class T> void put(stdstr name, shptr<T> obj, bool mustHaveValue = false) {
		__ASSERT_MUST_HAVE_VALUE(!mustHaveValue || obj != nullptr);
		static_assert(static_cast<ObjBase *>(reinterpret_cast<T *>(0)) == 0);
		auto base = obj ? obj->shared<ObjBase>() : nullptr;
		param(name + "#inst", base ? "1" : "null");
		param(name + "#handle", base ? to_str((int64)base.get()) : "null");
		param(name + "#gen", base ? to_str(base->_gen) : "null");
	}
	template<class T> void put(stdstr name, stdop<shptr<T>> val) {		
		put(name, val.has_value() ? val.value() : nullptr);
	}
	#undef __ASSERT_MUST_HAVE_VALUE
	template<class T> void put(stdstr name, stdvec<T> vec) {
		put(name + "#list", (int64)vec.size());
		for (size_t i = 0; i < vec.size(); i++)
			put(name + "#" + to_str(i), (T)vec[i]);
	}
	template<class T> void put(stdstr name, stdop<stdvec<T>> vec) {
		if (!vec.has_value())
			put(name + "#list", stdop<int64>());
		else
			put(name, vec.value());
	}
	template<class T> void put(stdstr name, stdop<T> val) {
		static_assert(std::is_enum<T>());
		param(name, val.has_value() ? to_str((int64)val.value()) : "null");
	}
	void call() {
		auto result = method();
		__ASSERT(!result.has_value());
	}
	bool call(bool &value) {
		auto result = method();
		value = result.has_value() && result.value() != "0" ? true : false;
		return result.has_value();
	}
	bool call(int64 &value) {
		auto result = method();
		value = result.has_value() ? res_int64(result.value()) : 0;
		return result.has_value();
	}
	bool call(double &value) {
		auto result = method();
		value = result.has_value() ? res_double(result.value()) : 0.0;
		return result.has_value();
	}
	bool call(stdstr &value) {
		auto result = method();
		value = result.has_value() ? result.value() : "";
		return result.has_value();
	}
	template <class T> bool call(T &value) {
		static_assert(std::is_enum<T>());
		auto result = method();
		value = result.has_value() ? (T)res_int64(result.value()) : (T)0;
		return result.has_value();
	}
	void call(stdop<bool> &value) {
		value.reset();
		bool result;
		if (call(result)) value = result;
	}
	void call(stdop<int64> &value) {
		value.reset();
		int64 result;
		if (call(result)) value = result;
	}
	template <class T> void call(stdop<T> &value) {
		static_assert(std::is_enum<T>());
		value.reset();
		T result = (T)0;
		if (call(result)) value = result;
	}
	void call(stdop<double> &value) {
		value.reset();
		double result;
		if (call(result)) value = result;
	}
	void call(stdop<stdstr> &value) {
		value.reset();
		stdstr result;
		if (call(result)) value = result;
	}
	template <class T> bool call(shptr<T> &value, bool ctor = false) {
		static_assert(static_cast<ObjBase *>(reinterpret_cast<T *>(0)) == 0);
		auto result = method();
		value = result.has_value()
			? reinterpret_cast<ObjBase *>(res_int64(result.value()))->shared<T>()
			: nullptr;
		return result.has_value();
	}
	void check(bool cond) {
		__ASSERT(cond);
	}
};
