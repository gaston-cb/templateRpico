set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
add_executable(
    main 
    main.c 
)
target_link_libraries(main pico_stdlib)
