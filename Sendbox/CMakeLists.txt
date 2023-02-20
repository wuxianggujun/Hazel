cmake_minimum_required(VERSION 3.13)
project(Sendbox)

aux_source_directory(src SRC_LIST)
#指定子模块头文件目录
include_directories(../Hazel)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_include_directories(${PROJECT_NAME} PUBLIC Hazel::core)
target_link_libraries(${PROJECT_NAME} Hazel::core)

