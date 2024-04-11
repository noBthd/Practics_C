cmake_minimum_required(VERSION 3.19.2)
project(15bin VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(15bin main.c
        student.c
        stack.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
