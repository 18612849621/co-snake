#pragma once
#include <functional>
#include <thread>

class BaseThread {
   public:
    explicit BaseThread(std::function<void()>);
    virtual ~BaseThread();

   private:
    std::thread t_;
};