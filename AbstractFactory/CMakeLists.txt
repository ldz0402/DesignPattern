cmake_minimum_required(VERSION 3.0)

project(AbstractFactoryPattern VERSION 1.0.0)

set(CMAKE_BUILD_TYPE Debug)
message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")

include_directories(include)
add_subdirectory(source)

include_directories(../CommonTool/include)

aux_source_directory(. SRCE_DIR)

add_executable(main ${SRCE_DIR})

target_link_libraries(main PUBLIC
    tool
    commonTool
)

