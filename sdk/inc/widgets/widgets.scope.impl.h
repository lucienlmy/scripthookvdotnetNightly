#pragma once

stdvec<shptr<CustomStateBase>> scopeStack;

void __scopePush(shptr<CustomStateBase> &scope) {
    __ASSERT(scope && scope->_self);
    scopeStack.push_back(scope);
}

void __scopePop(shptr<CustomStateBase> &scope) {
    __ASSERT(scopeStack.size());
    __ASSERT(scopeStack.back() == scope);
    scopeStack.pop_back();
}

bool __scopeProc(shptr<CustomStateBase> &scope, stdfunc<void()> &proc) {
    bool result = true;
    __scopePush(scope);
    __try { proc(); } __except (1) { result = false; }
    __scopePop(scope);
    return result;
}

bool scopeProc(shptr<CustomStateBase> scope, stdfunc<void()> proc) {
    __ASSERT(scope && proc);
    return __scopeProc(scope, proc);
}

shptr<CustomStateBase> scopeCurrent() {
    __ASSERT(scopeStack.size());
    return scopeStack.back();
}