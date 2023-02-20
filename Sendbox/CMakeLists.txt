cmake_minimum_required(VERSION 3.13)
project(Sendbox)

add_executable(${PROJECT_NAME} src/Application.cpp)

target_link_libraries(${PROJECT_NAME} Hazel::core)

