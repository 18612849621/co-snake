#include <iostream>

#include "thread/thread.h"

int main() {
    std::cout << "Number of hardware threads available: " << std::thread::hardware_concurrency()
              << std::endl;
    BaseThread base_flow([]() -> void { std::cout << "Thread Hello, world"; });
    std::cout << "Hello, world!" << std::endl;
    return 0;
}