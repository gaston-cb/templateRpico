cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

include_directories()
add_library(dht11
    inc/file_test.h 
    src/file_test.c)

target_include_directories(dht11 PUBLIC 
    ${CMAKE_CURRENT_LIST_DIR}/inc)  


target_link_libraries(dht11 pico_stdlib) 
