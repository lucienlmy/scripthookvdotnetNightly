#pragma once

void callback_call(Callback *thiz, ObjBase *ctx) {
    __ASSERT(thiz && thiz->self && thiz->_self && ctx);
    thiz->shared<Callback>()->_call(ctx->shared<ObjBase>());
}

void callback_unref(Callback *thiz) {
    __ASSERT(thiz && thiz->self && thiz->_self);
    thiz->shared<Callback>()->_unref();
}

bool Callback::tryFreeThis() {
    if (scope && scope->disposed()) {
        scope = nullptr;
        call = nullptr;
    }
    return ObjBase::tryFreeThis();
}

shptr<Callback> Callback::ctorDef(stdstr name, decltype(call) call) {
    auto m = ManagedCall("Core", "CallbackCreate");
    auto scope = scopeCurrent();
    name = scope->classname + ">" + name;
    m.put("name", name);
    m.put("callback_call", callback_call);
    m.put("callback_unref", callback_unref);
    shptr<Callback> result;
    m.check(m.call(result, true));    
    result->name = name;
    result->call = call;
    result->scope = scope;
    return result;
}

RegisterInstantiatorEx(Callback, false, true);

void Callback::verifyParams(shptr<ObjBase> ctx, int count) {
    auto m = ManagedCall("Core", "CallbackContextParamCount");
    m.put("ctx", ctx, true);
    int64 result;
    m.call(result);
    __ASSERT(result == count);
}

stdop<int64> Callback::paramInt64(shptr<ObjBase> ctx, int idx, bool force) {
    auto m = ManagedCall("Core", "CallbackContextParamInt64");
    m.put("ctx", ctx, true);
    m.put("idx", idx);
    stdop<int64> result;
    m.call(result);
    if (force && !result.has_value()) result = 0;
    return result;
}

stdop<double> Callback::paramDouble(shptr<ObjBase> ctx, int idx, bool force) {
    auto m = ManagedCall("Core", "CallbackContextParamDouble");
    m.put("ctx", ctx, true);
    m.put("idx", idx);
    stdop<double> result;
    m.call(result);
    if (force && !result.has_value()) result = 0.0;
    return result;
}

stdop<bool> Callback::paramBool(shptr<ObjBase> ctx, int idx, bool force) {
    auto m = ManagedCall("Core", "CallbackContextParamBool");
    m.put("ctx", ctx, true);
    m.put("idx", idx);
    stdop<bool> result;
    m.call(result);
    if (force && !result.has_value()) result = false;
    return result;
}

stdop<stdstr> Callback::paramString(shptr<ObjBase> ctx, int idx, bool force) {
    auto m = ManagedCall("Core", "CallbackContextParamString");
    m.put("ctx", ctx, true);
    m.put("idx", idx);
    stdop<stdstr> result;
    m.call(result);
    if (force && !result.has_value()) result = "";
    return result;
}

shptr<ObjBase> Callback::paramInst(shptr<ObjBase> ctx, int idx) {
    auto m = ManagedCall("Core", "CallbackContextParamInst");
    m.put("ctx", ctx, true);
    m.put("idx", idx);
    shptr<ObjBase> result;
    m.call(result);
    return result;
}

void Callback::resultInt64(shptr<ObjBase> ctx, stdop<int64> value) {
    auto m = ManagedCall("Core", "CallbackContextResultInt64");
    m.put("ctx", ctx, true);
    m.put("value", value);
    m.call();
}

void Callback::resultDouble(shptr<ObjBase> ctx, stdop<double> value) {
    auto m = ManagedCall("Core", "CallbackContextResultDouble");
    m.put("ctx", ctx, true);
    m.put("value", value);
    m.call();
}

void Callback::resultBool(shptr<ObjBase> ctx, stdop<bool> value) {
    auto m = ManagedCall("Core", "CallbackContextResultBool");
    m.put("ctx", ctx, true);
    m.put("value", value);
    m.call();
}

void Callback::resultString(shptr<ObjBase> ctx, stdop<stdstr> value) {
    auto m = ManagedCall("Core", "CallbackContextResultString");
    m.put("ctx", ctx, true);
    m.put("value", value);
    m.call();
}

void Callback::resultInst(shptr<ObjBase> ctx, shptr<ObjBase> value) {
    auto m = ManagedCall("Core", "CallbackContextResultInst");
    m.put("ctx", ctx, true);
    m.put("value", value);
    m.call();
}