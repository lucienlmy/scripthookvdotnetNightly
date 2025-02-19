#pragma once

class Callback : public ObjBase
{
public:
    #define _verifyParams(count) verifyParams(ctx, count);
    #define _ctorDef(n, p) ctorDef(n, [proc](shptr<ObjBase> ctx) p)
    #define _ctorMain(t, p) shptr<Callback> ctorMain(stdstr name, t proc) { return _ctorDef(name, p); }

    shptr<ObjBase> _self;

    bool _excepted = false;

    stdstr name;
    shptr<class CustomStateBase> scope;

    stdfunc<void(shptr<ObjBase> ctx)> call = nullptr;

    void _call(shptr<ObjBase> ctx) {
        __ASSERT(_self && scope && call, name);
        if (_excepted) return;
        bool success = scopeProc(scope, [thiz = shared<Callback>(), ctx]() { thiz->call(ctx); });
        if (!success) _excepted = true;
        __ASSERT_NOEXIT(success, "Exception while executing callback " + name);
    }

    void _unref() {
        __ASSERT(_self);
        scope = nullptr;
        call = nullptr;
        auto _thiz = _self;
        _self = nullptr;
        _thiz = nullptr;
    }

    virtual bool tryFreeThis();

	static shptr<Callback> ctorDef(stdstr name, decltype(call) call);
    static void verifyParams(shptr<ObjBase> ctx, int count);    
    static stdop<int64> paramInt64(shptr<ObjBase> ctx, int idx, bool force = true);
    static stdop<double> paramDouble(shptr<ObjBase> ctx, int idx, bool force = true);
    static stdop<bool> paramBool(shptr<ObjBase> ctx, int idx, bool force = true);
    static stdop<stdstr> paramString(shptr<ObjBase> ctx, int idx, bool force = true);
    static shptr<ObjBase> paramInst(shptr<ObjBase> ctx, int idx);
    template <class T> static shptr<T> paramInst(shptr<ObjBase> ctx, int idx) { return paramInst(ctx, idx)->shared<T>(); }
    static void resultInt64(shptr<ObjBase> ctx, stdop<int64> value);
    static void resultDouble(shptr<ObjBase> ctx, stdop<double> value);
    static void resultBool(shptr<ObjBase> ctx, stdop<bool> value);
    static void resultString(shptr<ObjBase> ctx, stdop<stdstr> value);
    static void resultInst(shptr<ObjBase> ctx, shptr<ObjBase> value);
    template <class T> static void resultInst(shptr<ObjBase> ctx, shptr<T> value) { resultInst(ctx, value->shared<ObjBase>()); }
    
    static _ctorMain(stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)>, {
        _verifyParams(2)
        resultInst(ctx, proc(paramInst<BuildContext>(ctx, 0), paramInt64(ctx, 1).value()));     
    })

    static _ctorMain(stdfunc<void()>, {
        _verifyParams(0)
		proc();
    })

    static _ctorMain(stdfunc<void(int64)>, {
        _verifyParams(1)
        proc(paramInt64(ctx, 0).value());
    })

    static _ctorMain(stdfunc<void(bool)>, {
        _verifyParams(1)
        proc(paramBool(ctx, 0).value());
    })

    static _ctorMain(stdfunc<void(double)>, {
        _verifyParams(1)
        proc(paramDouble(ctx, 0).value());
    })

    static _ctorMain(stdfunc<void(int64, int64)>, {
        _verifyParams(2)
        proc(paramInt64(ctx, 0).value(), paramInt64(ctx, 1).value());
    })

    static _ctorMain(stdfunc<void(stdstr)>, {
        _verifyParams(1)
        proc(paramString(ctx, 0).value());
    })

    template <class T> static _ctorMain(stdfunc<void(shptr<T>)>, {
        _verifyParams(1)
        proc(paramInst<T>(ctx, 0));
    })

    template <class R> static _ctorMain(stdfunc<shptr<R>(int64, int64)>, {
        _verifyParams(2)
        resultInst(ctx, proc(paramInt64(ctx, 0).value(), paramInt64(ctx, 1).value()));
    })
        
    template <class R, class T> static _ctorMain(stdfunc<shptr<R>(shptr<T>)>, {
        _verifyParams(1)
        resultInst(ctx, proc(paramInst<T>(ctx, 0)));
    })

    template <class R, class T0, class T1> static _ctorMain(stdfunc<shptr<R>(shptr<T0>, shptr<T1>)>, {
        _verifyParams(2)
        resultInst(ctx, proc(paramInst<T0>(ctx, 0), paramInst<T1>(ctx, 1)));
    })

    template <class R, class T0, class T2> static _ctorMain(stdfunc<shptr<R>(shptr<T0>, bool, shptr<T2>)>, {
        _verifyParams(3)
        resultInst(ctx, proc(paramInst<T0>(ctx, 0), paramBool(ctx, 1).value(), paramInst<T2>(ctx, 2)));
    })

    template <class R, class T0, class T2> static _ctorMain(stdfunc<shptr<R>(shptr<T0>, int64, shptr<T2>)>, {
        _verifyParams(3)
        resultInst(ctx, proc(paramInst<T0>(ctx, 0), paramInt64(ctx, 1).value(), paramInst<T2>(ctx, 2)));
    })

    template <class R, class T0, class T2> static _ctorMain(stdfunc<shptr<R>(shptr<T0>, double, shptr<T2>)>, {
        _verifyParams(3)
        resultInst(ctx, proc(paramInst<T0>(ctx, 0), paramDouble(ctx, 1).value(), paramInst<T2>(ctx, 2)));
    })

    template <class R, class T0, class T1, class T2> static _ctorMain(stdfunc<shptr<R>(shptr<T0>, shptr<T1>, shptr<T2>)>, {
        _verifyParams(3)
        resultInst(ctx, proc(paramInst<T0>(ctx, 0), paramInst<T1>(ctx, 1), paramInst<T2>(ctx, 2)));
    })

    template <class T0, class T1> static _ctorMain(stdfunc<void(shptr<T0>, shptr<T1>)>, {
        _verifyParams(2)
        proc(paramInst<T0>(ctx, 0), paramInst<T1>(ctx, 1));
    })

    template <class T> static _ctorMain(stdfunc<bool(shptr<T>)>, {
        _verifyParams(1)
        resultBool(ctx, proc(paramInst<T>(ctx, 0)));
    })

    template <class T> static _ctorMain(stdfunc<int64(shptr<T>)>, {
        _verifyParams(1)
        resultInt64(ctx, proc(paramInst<T>(ctx, 0)));
    })

    #undef _param_defs_outer
    #undef _param_defs_inner
    #undef _verifyParams
    #undef _ctorDef
    #undef _ctorMain    
};