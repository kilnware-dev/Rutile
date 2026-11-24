cmake_minimum_required(VERSION 3.2.10)


project("rutile")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} PRIVATE 
"src/rutile.c"
)
target_include_directories(${PROJECT_NAME} PUBLIC "include")

add_subdirectory("examples")
