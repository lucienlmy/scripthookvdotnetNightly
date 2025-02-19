#pragma once

class CustomStatefulWidget : public StatefulWidget
{
public:
	#define CustomStatefulCtor(name) name::ctorMain<class name>(#name)
    #define CustomStatefulCtorWithKey(name, key) name::ctorMain<class name>(#name, key)

    template<class T = CustomStatefulWidget> shptr<T> shared() {
        return ObjBase::shared<T>();
    }

	template <class T> static shptr<T> /*non-null*/ ctorMain(stdstr type, shptr<class Key> key = nullptr) {
		auto m = ManagedCall("Core", "CustomStatefulWidgetCreate");		
		extern void customStatefulWidget_procParams(ManagedCall &m);
		customStatefulWidget_procParams(m);
		m.put("type", type);
        m.put("key", key);
		shptr<T> result;
		m.check(m.call(result, true));
		return result;
	}
};

class CustomStateBase : public State<StatefulWidget>
{
public:
    shptr<ObjBase> _self;

    shptr<CustomStatefulWidget> _widget;

    bool _initialized = false;
    bool _disposed = false;

    bool _excepted = false;
    void _verify(stdstr method, bool success) {
        if (success) return;
        _excepted = true;
        auto name = classname + "::" + method + "()";
        __ASSERT_NOEXIT(false, "Exception while executing " + name);
    }

    void _init() {
        __ASSERT(!_initialized);        
        _verify("init", scopeProc(this->shared(), [this]() { init(); }));
        _initialized = true;
    }

    void _dispose() {
        __ASSERT(_initialized);
        __ASSERT(!_disposed);
        if (!_excepted) _verify("dispose", scopeProc(this->shared(), [this]() { dispose(); }));
        _disposed = true;
        _unref();
    }

    void _unref() {
        __ASSERT(_disposed);
        __ASSERT(_self);
        auto _thiz = _self;
        _self = nullptr;
        _thiz = nullptr;
    }

    void _setWidget(shptr<CustomStatefulWidget> widget) {
        __ASSERT(!widget || classname == widget->classname + "State");
        _widget = widget;
    }

    bool _ticker() {
        if (_excepted || disposed()) return false;
        bool result = false;
        _verify("ticker", scopeProc(this->shared(), [this, &result]() { result = ticker(); }));
        return _excepted ? false : result;
    }

    shptr<Widget> _build(shptr<BuildContext> ctx) {
        //printf("%lld\n", objectInstances.size());
        shptr<Widget> built;
        if (!_excepted) _verify("build", scopeProc(this->shared(), [this, &built, ctx]() { built = build(ctx); }));
        _verify("build", _excepted || built);
        extern shptr<Widget> customState_buildDummy();
        return built ? built : customState_buildDummy();
    }

    virtual void init() {}

    virtual void dispose() {}

    virtual bool ticker() { return false; }

	virtual shptr<Widget> build(shptr<BuildContext> context) {
		return nullptr;
	}

    bool disposed() {
        return !self || !_self || _disposed;
    }

	void update() {
		if (_excepted || disposed()) return;
        _verify("update", scopeProc(this->shared(), [this]() { 
            auto m = ManagedCall("Core", "CustomStateUpdate");
            m.put("this", this);
            m.call();
        }));
	}

    shptr<BuildContext> context() {
        shptr<BuildContext> result;
        _verify("context", scopeProc(this->shared(), [this, &result]() {
            auto m = ManagedCall("Core", "CustomStateContext");
            m.put("this", this);            
            m.check(m.call(result));
        }));
        return result;
	}

    template<class T = CustomStateBase> shptr<T> shared() {
        return ObjBase::shared<T>();
    }
};

template <class T>
class CustomState : public CustomStateBase {
public:
    shptr<T> widget() {
        __ASSERT(!_widget || classname == _widget->classname + "State");
        return _widget->shared<T>();
    }

    template<class T1 = CustomState<T>> shptr<T1> shared() {
        return ObjBase::shared<T1>();
    }
};