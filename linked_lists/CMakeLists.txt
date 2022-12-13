cmake_minimum_required(VERSION 3.0.0)
project(linked_lists C)

include(CTest)
enable_testing()

add_executable(linked_lists main.c linked_list.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
