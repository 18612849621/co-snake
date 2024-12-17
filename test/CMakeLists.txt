include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(test_main test_main.cc)

target_link_libraries(
    test_main PRIVATE
    # lib_my 
    lib_utils
    lib_thread
)