# CMakeLists.txt

cmake_minimum_required(VERSION 3.0)
# CMake的依赖版本，指明运行在3.0版本以及以上

project(Pat_solutions)
# 声明工程

add_subdirectory(chapter3)
# 增加子目录 

message("From top level:")
message("   Source (general): ${PROJECT_SOURCE_DIR}")
message("   Source (Pat_solutions): ${Pat_solutions_SOURCE_DIR}")

