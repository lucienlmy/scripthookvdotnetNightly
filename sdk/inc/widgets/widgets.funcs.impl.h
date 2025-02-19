#pragma once

stdmap<stdstr, stdfunc<ObjBase *(int64)>> *instantiators = nullptr;

void RegisterInstantiatorProc(stdstr name, stdfunc<ObjBase *(int64)> proc) {
    if (!instantiators) instantiators = new stdmap<stdstr, stdfunc<ObjBase *(int64)>>();
    __ASSERT(instantiators->find(name) == instantiators->end(), name);
    (*instantiators)[name] = proc;
}

HMODULE moduleHandle = nullptr;
bool moduleRegistered = false;

ObjBase *createInstance(const char *clname, int64 gen) {
    if (instantiators->find(clname) != instantiators->end())
        return (*instantiators)[clname](gen);
    ReturnNewInstance(ObjBase, clname, gen, false, false);
}

BOOL freeInstance(ObjBase *instance) {
    __ASSERT(instance);
    return instance->tryFreeThis();
}

int64 getInstanceGen(ObjBase *instance) {
    __ASSERT(instance);
    return instance->_gen;
}

void registerModuleIfRequired() {
    if (moduleRegistered) return;
    moduleRegistered = true;
    __ASSERT(moduleHandle);
    auto m = ManagedCall("Core", "RegisterModule");
    m.put("createInstance", createInstance);    
    m.put("freeInstance", freeInstance);
    m.put("getInstanceGen", getInstanceGen);
    m.call();
}

void uiModuleRegister(HMODULE module) {
    __ASSERT(!moduleRegistered && !moduleHandle && module);
    moduleHandle = module;
}

void uiModuleUnregister(HMODULE module) {
    __ASSERT(moduleRegistered && module == moduleHandle && module);
    auto m = ManagedCall("Core", "UnregisterModule");
    m.call();
}

void uiRootWidgetChildBringToFront(shptr<class Widget> child) {
    auto m = ManagedCall("Core", "RootWidgetChildBringToFront");
    m.put("child", child, true);
    m.call();
}

void uiRootWidgetChildrenBringToFront() {
    auto m = ManagedCall("Core", "RootWidgetChildrenBringToFrontUsingModule");
    m.call();
}

void uiRootWidgetChildrenBringToFrontUsingTag(stdstr tag) {
    auto m = ManagedCall("Core", "RootWidgetChildrenBringToFrontUsingTag");
    m.put("tag", tag);
    m.call();
}

void uiRootWidgetChildAdd(shptr<class Widget> child, stdstr tag) {
    auto m = ManagedCall("Core", "RootWidgetChildAdd");
    m.put("child", child, true);
    m.put("tag", tag);
    m.call();
}

void uiRootWidgetChildRemove(shptr<class Widget> child) {
    auto m = ManagedCall("Core", "RootWidgetChildRemove");
    m.put("child", child, true);
    m.call();
}

void uiRootWidgetChildrenRemove() {
    auto m = ManagedCall("Core", "RootWidgetChildrenRemoveUsingModule");
    m.call();
}

void uiRootWidgetChildrenRemoveUsingTag(stdstr tag) {
    auto m = ManagedCall("Core", "RootWidgetChildrenRemoveUsingTag");
    m.put("tag", tag);
    m.call();
}

void uiStartMenuSetGroups(stdvec<shptr<class ObjBase>> groups) {
    auto m = ManagedCall("Core", "StartMenuSetGroups");
    m.put("groups", groups);
    m.call();
}

void uiStartMenuRemoveGroups() {
    auto m = ManagedCall("Core", "StartMenuRemoveGroups");
    m.call();
}

shptr<class ObjBase> uiStartMenuGroup(stdstr title, shptr<class IconData> icon, double iconScale, bool extractFirst,
                                      void onShortcut(int64), stdvec<shptr<class ObjBase>> shortcuts) {
    auto m = ManagedCall("Core", "StartMenuGroupCreate");
    m.put("title", title);
    m.put("icon", icon);
    m.put("iconScale", iconScale);
    m.put("extractFirst", extractFirst);
    m.put("onShortcut", onShortcut);
    m.put("shortcuts", shortcuts);
    shptr<class ObjBase> result;
    m.check(m.call(result));
    return result;
}

shptr<class ObjBase> uiStartMenuShortcut(int64 id, stdstr title, shptr<class IconData> icon, 
                                         shptr<class Color> iconColor, shptr<class ImageProvider> image) {
    auto m = ManagedCall("Core", "StartMenuShortcutCreate");
    m.put("id", id);
    m.put("title", title);
    m.put("icon", icon);
    m.put("iconColor", iconColor);
    m.put("image", image);
    shptr<class ObjBase> result;
    m.check(m.call(result));
    return result;
}

float uiGetGlobalAlpha() {
    __declspec(dllimport) float getGlobalAlpha();
    return getGlobalAlpha();
}

float uiGetGlobalScale() {
    __declspec(dllimport) float getGlobalUiScale();
    return getGlobalUiScale();
}