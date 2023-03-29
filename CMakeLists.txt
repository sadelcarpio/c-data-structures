cmake_minimum_required(VERSION 3.0.0)
project(data_structures C)

add_subdirectory("${PROJECT_SOURCE_DIR}/linked_lists" "${PROJECT_SOURCE_DIR}/linked_lists/cmake-build-debug")
add_subdirectory("${PROJECT_SOURCE_DIR}/test_code" "${PROJECT_SOURCE_DIR}/test_code/cmake-build-debug")
