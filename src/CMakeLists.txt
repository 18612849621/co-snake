find_package(Threads REQUIRED)

file(GLOB BASE_SOURCES base/*.cc)
# base
add_library(
    lib_base STATIC 
    ${BASE_SOURCES}
)

# utils
add_library(
    lib_utils STATIC
    utils/utils.cc
)

# link
target_link_libraries(
    lib_base PUBLIC
    Threads::Threads
)