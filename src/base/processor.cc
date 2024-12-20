#include "processor.h"

// 算子执行逻辑
bool BaseProcessor::Run() {
    // 1、执行异步回调 2、执行核心函数逻辑 3、注册回调(is_async = True)
    ExecuteAsyncCallback();
    Apply();
    if (is_async_) {
        RegisterAsyncCallback();
    }
    return true;
}

bool BaseProcessor::ExecuteAsyncCallback() {
    ProcessorDebugInfo("Execute async call back.");
    return true;
}

bool BaseProcessor::RegisterAsyncCallback() {
    ProcessorDebugInfo("Register async call back.");
    return true;
}
// 核心函数逻辑
bool BaseProcessor::Apply() {
    ProcessorDebugInfo("Apply.");
    return true;
};