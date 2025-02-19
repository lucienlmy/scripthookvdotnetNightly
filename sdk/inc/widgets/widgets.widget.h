#pragma once

class DiagnosticableTree : public ObjBase {};

class Widget : public DiagnosticableTree
{
public:
    struct _animate
    {
        /*nullable*/ shptr<class Key> key;
        /*nullable*/ stdop<stdvec<shptr<class Effect>>> effects;
        /*nullable*/ stdfunc<void(shptr<class AnimationController>)> /*(AnimationController) -> void*/ onInit;
        /*nullable*/ stdfunc<void(shptr<class AnimationController>)> /*(AnimationController) -> void*/ onPlay;
        /*nullable*/ stdfunc<void(shptr<class AnimationController>)> /*(AnimationController) -> void*/ onComplete;
        /*nullable*/ stdop<bool> autoPlay;
        /*nullable*/ shptr<class Duration> delay;
        /*nullable*/ shptr<class AnimationController> controller;
        /*nullable*/ shptr<class Adapter> adapter;
        /*nullable*/ stdop<double> target;
        /*nullable*/ stdop<double> value;
    };
    shptr<class Animate> /*non-null*/ animate(_animate p = {});
};

class StatefulWidget : public Widget {};
class RenderObjectWidget : public Widget {};
class StatelessWidget : public Widget {};
class PreferredSizeWidget : public Widget {};
class ProxyWidget : public Widget {};
class InheritedWidget : public ProxyWidget {};
class ParentDataWidget : public ProxyWidget {};
class InheritedTheme : public InheritedWidget {};

template <class T> class State : public ObjBase {};

class BuildContext : public ObjBase {};

class Key : public ObjBase
{
public:
    static shptr<class Key> /*non-null*/ ctorMain(stdstr value);
};

class LocalKey : public Key {};

class UniqueKey : public LocalKey
{
public:
    static shptr<class UniqueKey> /*non-null*/ ctorMain();
};

template <class T> class GlobalKey : public Key {};

inline shptr<class Key> Key(stdstr value) {
    return Key::ctorMain(value);
}

inline shptr<class UniqueKey> UniqueKey() {
    return UniqueKey::ctorMain();
}
