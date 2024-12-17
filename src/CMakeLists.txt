find_package(Threads REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

# thread
add_library(
    lib_thread STATIC 
    thread/thread.cc
)
# utils
add_library(
    lib_utils STATIC
    utils/utils.cc
)

# link
target_link_libraries(
    lib_thread PUBLIC
    Threads::Threads
)