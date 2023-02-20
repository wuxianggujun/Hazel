cmake_minimum_required(VERSION 3.13)
project(Hazel)
message("Hazel 子模块：${PROJECT_SOURCE_DIR}")
# 添加头文件目录
#include_directories(${PROJECT_SOURCE_DIR}/include)
#设置资源文件
aux_source_directory(src SRC_LIST)

add_library(${PROJECT_NAME} SHARED ${SRC_LIST} src/Core.h Hazel.h src/EntryPoint.h)
add_library(Hazel::core ALIAS ${PROJECT_NAME})

#target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

#将动态库名字设为add
#set_target_properties(hazel_lib_shared PROPERTIES OUTPUT_NAME "Hazel")
#set_target_properties(hazel_lib_shared PROPERTIES VERSION 1.0 SOVERSION 1)
