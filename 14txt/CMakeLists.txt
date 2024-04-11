cmake_minimum_required(VERSION 3.19.2)
project(14txt VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(14txt main.c
        student.c
        stack.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
