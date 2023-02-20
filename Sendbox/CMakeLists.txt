cmake_minimum_required(VERSION 3.13)
project(Sendbox)

aux_source_directory(src SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

#target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}/include)
target_link_libraries(${PROJECT_NAME} Hazel::core)

