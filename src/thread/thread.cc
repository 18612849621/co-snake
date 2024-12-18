#include "thread/thread.h"

#include <functional>
#include <iostream>

BaseThread::BaseThread(std::function<void()> func) {
    t_ = std::thread(func);
    std::cout << "Thread " << t_.get_id() << " is running!" << std::endl;
}

BaseThread::~BaseThread() {
    if (t_.joinable()) {
        std::cout << "Thread " << t_.get_id() << " is killed!" << std::endl;
        t_.join();
    }
}