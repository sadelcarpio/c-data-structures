cmake_minimum_required(VERSION 3.0.0)
project(data_structures C)

include(CTest)
enable_testing()

add_executable(doubly_linked_lists main.c dll.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
