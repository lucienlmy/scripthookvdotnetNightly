#pragma once

#include <windows.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <memory>
#include <optional>

#define shptr std::shared_ptr
#define make_shptr std::make_shared
#define sharable std::enable_shared_from_this
#define static_shptr_cast std::static_pointer_cast
#define const_shptr_cast std::const_pointer_cast
#define dynamic_shptr_cast std::dynamic_pointer_cast

#define wptr std::weak_ptr

#define wkptr std::weak_ptr

#define stdop std::optional
#define stdopnull std::nullopt

#define to_str std::to_string

#define uint uint32_t
#define uint16 uint16_t
#define uint32 uint32_t
#define uint64 uint64_t
#define int16 int16_t
#define int32 int32_t
#define int64 int64_t

using stdstr = std::string;
template<class T> using stdvec = std::vector<T>;
template<class T> using stdset = std::set<T>;
template<class T> using stduset = std::unordered_set<T>;
template<class T> using stdfunc = std::function<T>;
template<class T1, class T2> using stdp = std::pair<T1, T2>;
template<class T1, class T2> using stdmap = std::map<T1, T2>;
template<class T1, class T2> using stdumap = std::unordered_map<T1, T2>;

extern "C" IMAGE_DOS_HEADER __ImageBase;

static void __assert(bool cond, bool exit, const char *file, int line, stdstr msg = "")
{	
	if (cond) return;
	char szModule[MAX_PATH];
	memset(szModule, 0, sizeof(szModule));
	GetModuleFileNameA((HMODULE)&__ImageBase, szModule, sizeof(szModule));
	int nameidx = 0;
	for (int i = (int)strlen(szModule) - 1; i >= 0 && szModule[i] != '\\'; i--) nameidx = i;
	stdstr module = stdstr(&szModule[nameidx]);
	stdstr text = msg.size() ? msg : (file + stdstr(":") + to_str(line));
	stdstr message = "CRITICAL ERROR\n\nModule: " + module + "\n\nBuild: " + stdstr(__DATE__) + "\n\n" + text;
	OutputDebugStringA(text.c_str());
	MessageBoxA(0, message.c_str(), "CRITICAL ERROR", MB_ICONERROR);
	if (!exit) return;
	TerminateProcess(GetCurrentProcess(), 0);
	ExitProcess(0);
}

#define __CALL_ASSERT(cond, exit, _throw, ...)				\
{															\
	bool _cond = (cond) ? true : false;						\
	if (!_cond && IsDebuggerPresent()) DebugBreak();		\
	__assert(_cond, exit, __FILE__, __LINE__, __VA_ARGS__);	\
	if (!_cond && _throw) DebugBreak();						\
}

#define __ASSERT(cond, ...) __CALL_ASSERT(cond, true, false, __VA_ARGS__)
#define __ASSERT_NOEXIT(cond, ...) __CALL_ASSERT(cond, false, false, __VA_ARGS__)
#define __ASSERT_THROW(cond, ...) __CALL_ASSERT(cond, false, true, __VA_ARGS__)


template <class R, class T> stdvec<R> vec_join(const T &value) {
	return { value };
}

template <class R, class T> stdvec<R> vec_join(const stdvec<T> &value) {
	return value;
}

template <class R, class T, class ...Ts> stdvec<R> vec_join(const T &value, Ts... values) {
	stdvec<R> result = { value };
	auto other = vec_join<R>(values...);
	result.reserve(result.size() + other.size());
	for (auto &i : other) result.push_back(i);
	return result;
}

template <class R, class T, class ...Ts> stdvec<R> vec_join(const stdvec<T> &value, Ts... values) {
	stdvec<R> result;
	result.reserve(value.size());
	for (auto &i : value) result.push_back(i);
	auto other = vec_join<R>(values...);
	result.reserve(result.size() + other.size());
	for (auto &i : other) result.push_back(i);
	return result;
}

template <class R, class T> stdvec<R> vec_map(const stdvec<T> &vec, stdfunc<R(const T &, int)> cb) {
	stdvec<R> result;
	result.reserve(vec.size());
	for (uint i = 0; i < vec.size(); i++) result.push_back(cb(vec[i], (int)i));
	return result;
}

#define arr_to_vec(arr) _arr_to_vec(arr, sizeof(arr) / sizeof(arr[0]))

template <class T, class R = std::remove_const_t<T>> stdvec<R> _arr_to_vec(T arr[], size_t count) {
	stdvec<R> result;
	result.reserve(count);
	for (size_t i = 0; i < count; i++) result.push_back(arr[i]);
	return result;
}

inline stdstr str_lw(stdstr str) {
	for (size_t i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
	return str;
}

inline stdstr str_up(stdstr str) {
	for (size_t i = 0; i < str.size(); i++) str[i] = toupper(str[i]);
	return str;
}