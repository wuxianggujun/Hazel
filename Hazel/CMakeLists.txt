cmake_minimum_required(VERSION 3.13)
project(Hazel)
message("Hazel 子模块：${PROJECT_SOURCE_DIR}")
#设置资源文件
#添加spdlog
find_package(spdlog REQUIRED)
#引入spdlog的头文件
include_directories(${SPDLOG_INCLUDE_DIR})

#GLOB_RECURSE遍历子目录中的文件
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp" "src/*.h")

#将当前模块编译成动态库
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
#取一个别名
add_library(Hazel::core ALIAS ${PROJECT_NAME})
#定义
target_compile_definitions(${PROJECT_NAME} PUBLIC SPDLOG_FMT_EXTERNAL)
#target_compile_definitions(spdlog_header_only INTERFACE SPDLOG_FMT_EXTERNAL)
target_link_libraries(${PROJECT_NAME} PUBLIC spdlog::spdlog)

