#pragma once

shptr<class Animate> /*non-null*/ Widget::animate(_animate p) {
    auto m = ManagedCall("Animate", "animate");
    m.put("this", this);
    m.put("key", p.key);
    m.put("effects", p.effects);
    m.put("onInit", p.onInit);
    m.put("onPlay", p.onPlay);
    m.put("onComplete", p.onComplete);
    m.put("autoPlay", p.autoPlay);
    m.put("delay", p.delay);
    m.put("controller", p.controller);
    m.put("adapter", p.adapter);
    m.put("target", p.target);
    m.put("value", p.value);
    shptr<class Animate> result;
    m.check(m.call(result));
    return result;
}

shptr<class Key> /*non-null*/ Key::ctorMain(stdstr value) {
    auto m = ManagedCall("Key", "Key");
    m.put("value", value);
    shptr<class Key> result;
    m.check(m.call(result, true));
    return result;
}

shptr<class UniqueKey> /*non-null*/ UniqueKey::ctorMain() {
    auto m = ManagedCall("UniqueKey", "UniqueKey");
    shptr<class UniqueKey> result;
    m.check(m.call(result, true));
    return result;
}