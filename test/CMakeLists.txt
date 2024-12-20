include_directories(
    ${CMAKE_SOURCE_DIR}/src
)

set(COMMON_LIBRARIES lib_utils lib_base)

add_executable(test_main test_main.cc)
add_executable(test_processor test_processor.cc)

target_link_libraries(test_main PRIVATE ${COMMON_LIBRARIES})
target_link_libraries(test_processor PRIVATE ${COMMON_LIBRARIES})