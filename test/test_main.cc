#include <iostream>

#include "base/thread.h"

int main() {
    std::cout << "Number of hardware threads available: " << std::thread::hardware_concurrency()
              << std::endl;
    BaseThread* t_ptr = new BaseThread([]() -> void { std::cout << "[sub thread] Hello, world!"; });
    std::cout << "[main thread] Hello, world!" << std::endl;
    delete t_ptr;
    return 0;
}