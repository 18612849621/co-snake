#include "thread/thread.h"

#include <functional>

BaseThread::BaseThread(std::function<void()> func) { t_ = std::thread(std::move(func)); }
BaseThread::~BaseThread() {
    if (t_.joinable()) {
        t_.join();
    }
}