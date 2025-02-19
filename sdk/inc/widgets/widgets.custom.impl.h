#pragma once

shptr<Widget> customState_buildDummy() {
    return SizedBox::shrink();
}

void customState_Init(CustomStateBase *thiz) {
    __ASSERT(thiz && thiz->self && thiz->_self);
    thiz->_init();
}

void customState_Dispose(CustomStateBase *thiz) {
    __ASSERT(thiz && thiz->self && thiz->_self);
    thiz->_dispose();
}

void customState_SetWidget(CustomStateBase *thiz, CustomStatefulWidget *widget) {
    __ASSERT(thiz && thiz->self && thiz->_self);
    thiz->_setWidget(widget->shared());
}

int64 customState_Ticker(CustomStateBase *thiz) {
    __ASSERT(thiz && thiz->self && thiz->_self);
    return thiz->_ticker() ? 1 : 0;
}

Widget *customState_Build(CustomStateBase *thiz, BuildContext *context) {
    __ASSERT(thiz && context && thiz->self && thiz->_self);
    auto built = thiz->_build(context->shared<BuildContext>());
    __ASSERT(built);
    return built.get();
}

void customStatefulWidget_procParams(ManagedCall &m) {
    m.put("customState_Init", customState_Init);
    m.put("customState_Dispose", customState_Dispose);
    m.put("customState_SetWidget", customState_SetWidget);
    m.put("customState_Ticker", customState_Ticker);    
    m.put("customState_Build", customState_Build);
}