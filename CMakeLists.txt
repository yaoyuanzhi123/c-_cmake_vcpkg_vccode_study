cmake_minimum_required(VERSION 3.12) #cmake最低版本要求
project(MyProject
    LANGUAGES CXX
    VERSION 1.0
    DESCRIPTION "Demo project"
    HOMEPAGE_URL "https://example.com"
)

#设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加头文件和源码
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB_RECURSE SOURCE "src/*.cpp")

# 添加可执行文件
add_executable(my_project main.cpp ${SOURCE})

message(STATUS "CMAKE_PREFIX_PATH = ${CMAKE_PREFIX_PATH}")

# 使用vcpkg安装的库(以fmt为例)
find_package(fmt CONFIG REQUIRED)
target_link_libraries(my_project PRIVATE fmt::fmt)