cmake_minimum_required(VERSION 3.27)
project(
    test1
    LANGUAGES CXX
    VERSION 1.0
    DESCRIPTION "test1 project"
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test1)

 set(sources
    main.cpp
 )
 
 target_sources(test1 PRIVATE ${sources})

