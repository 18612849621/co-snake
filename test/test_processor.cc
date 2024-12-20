#include <iostream>

#include "base/processor.h"

int main() {
    // sync
    BaseProcessor* sync_processor = new BaseProcessor("test_sync_op");
    std::cout << "processor's name is " << sync_processor->GetProcessorName() << std::endl;
    sync_processor->Run();
    // async
    BaseProcessor* async_processor = new BaseProcessor("test_async_op", true);
    std::cout << "processor's name is " << async_processor->GetProcessorName() << std::endl;
    async_processor->Run();
    // clear mem
    delete sync_processor;
    delete async_processor;
    return 0;
}