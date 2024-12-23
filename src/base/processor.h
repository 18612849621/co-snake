#pragma once

#include <iostream>
#include <string>
// GOAL: 尽可能保证算子无状态，才能实现基于协程的方式去调度

class BaseProcessor {
   public:
    BaseProcessor() = default;
    explicit BaseProcessor(std::string name, bool is_async = false)
        : name_(name), is_async_(is_async){};
    virtual ~BaseProcessor(){};
    virtual std::string GetProcessorName() { return name_; };
    virtual bool IsAsync() { return is_async_; };
    bool Run();  // 算子执行逻辑

   private:
    inline void ProcessorDebugInfo(std::string debug_info) {
        std::cout << "[Processor " << name_ << "]" << debug_info << std::endl;
    }
    virtual bool Apply();          // 核心函数逻辑
    bool RegisterAsyncCallback();  // 注册异步回调
   private:
    std::string name_;
    bool is_async_;
};