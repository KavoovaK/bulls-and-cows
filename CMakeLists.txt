cmake_minimum_required(VERSION 3.12.4)
project(bulls_and_cows)

set(CMAKE_CXX_STANDARD 14)

set(SPPC src/Bulls_and_cows.cpp src/Bulls_and_cows.h)
set(SPPC_TEST test/Bulls_and_cows_test.cpp test/Bulls_and_cows_test.h)

add_executable(${PROJECT_NAME} src/main.cpp ${SPPC})
add_executable(${PROJECT_NAME}_test test/main_test.cpp ${SPPC} ${SPPC_TEST})