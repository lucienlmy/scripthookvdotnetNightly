#pragma once

#ifdef HAS_OBJECT_TRACKING
extern stdset<class ObjBase *> objectInstances;
#endif

class ObjBase : public sharable<ObjBase>
{
public:
	shptr<ObjBase> self;

    stdstr classname;

	int64 _gen = 0;

    ObjBase() {
		#ifdef HAS_OBJECT_TRACKING
        objectInstances.emplace(this); 
		#endif
    }

    ~ObjBase() {
		#ifdef HAS_OBJECT_TRACKING
        objectInstances.erase(this);
		#endif
    }

	virtual bool tryFreeThis() {
		__ASSERT(self && self.use_count());
        if (self.use_count() > 1) return false;
		auto thiz = self;
		self = nullptr;
		thiz = nullptr;
        return true;
	}

	template<class T> shptr<T> shared() {
		static_assert(static_cast<ObjBase *>(reinterpret_cast<T *>(0)) == 0);
		return this ? static_shptr_cast<T>(shared_from_this()) : nullptr;
	}
};