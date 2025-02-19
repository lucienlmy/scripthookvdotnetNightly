#pragma once

void uiModuleRegister(HMODULE module);
void uiModuleUnregister(HMODULE module);

void uiRootWidgetChildBringToFront(shptr<class Widget> child);
void uiRootWidgetChildrenBringToFront();
void uiRootWidgetChildrenBringToFrontUsingTag(stdstr tag);

void uiRootWidgetChildAdd(shptr<class Widget> child, stdstr tag = "");
void uiRootWidgetChildRemove(shptr<class Widget> child);
void uiRootWidgetChildrenRemove();
void uiRootWidgetChildrenRemoveUsingTag(stdstr tag);

void uiStartMenuSetGroups(stdvec<shptr<class ObjBase>> groups);
void uiStartMenuRemoveGroups();

shptr<class ObjBase> uiStartMenuGroup(stdstr title, /*nullable*/ shptr<class IconData> icon, double iconScale,
      bool extractFirst, /*non-null*/ void onShortcut(int64), stdvec<shptr<class ObjBase>> shortcuts);

shptr<class ObjBase> uiStartMenuShortcut(int64 id, stdstr title, /*nullable*/ shptr<class IconData> icon = nullptr,
      /*nullable*/ shptr<class Color> iconColor = nullptr, /*nullable*/ shptr<class ImageProvider> image = nullptr);

float uiGetGlobalAlpha(); // from the settings [0.3 to 1.0]
float uiGetGlobalScale(); // from the settings [0.5 to 1.5]

void RegisterInstantiatorProc(stdstr name, stdfunc<ObjBase *(int64)> proc);

#define ReturnNewInstance(name, clname, gen, iswidgetstate, iscb) \
    __ASSERT((!iswidgetstate && !iscb) || (iswidgetstate != iscb)); \
    static_assert(static_cast<ObjBase *>(reinterpret_cast<class name *>(0)) == 0); \
    auto inst = shptr<class name>(new class name)->shared<ObjBase>(); \
    inst->self = inst; \
    inst->classname = clname; \
    inst->_gen = gen; \
    if (iswidgetstate) inst->shared<CustomStateBase>()->_self = inst; \
    else if (iscb) inst->shared<Callback>()->_self = inst; \
    return inst.get();

#define RegisterInstantiatorEx(name, iswidgetstate, iscb) \
    struct t_register_##name { t_register_##name() { \
        RegisterInstantiatorProc(#name, [](int64 gen) { ReturnNewInstance(name, #name, gen, iswidgetstate, iscb); }); \
    }} register_##name;

#define RegisterWidgetInstantiator(name) \
    RegisterInstantiatorEx(name, false, false) \
    RegisterInstantiatorEx(name##State, true, false)

