cmake_minimum_required(VERSION 3.10)
project(HelloCMake C)

set(CMAKE_C_STANDARD 11)

# початкові програми
add_executable(firstFile 1.c)
add_executable(secondfile 2.c)
add_executable(thirdfile 3.c)

# Модуль функцій
add_library(functions functions.c)

# Тести
add_executable(test_add test_add.c)
target_link_libraries(test_add functions)

add_executable(test_factorial test_factorial.c)
target_link_libraries(test_factorial functions)

enable_testing()
add_test(NAME AddTest COMMAND test_add)
add_test(NAME FactorialTest COMMAND test_factorial)
