#pragma once

bool scopeProc(shptr<class CustomStateBase> scope, stdfunc<void()> proc);
shptr<class CustomStateBase> scopeCurrent();