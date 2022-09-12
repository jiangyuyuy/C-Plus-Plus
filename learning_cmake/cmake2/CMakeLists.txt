cmake_minimum_required(VERSION 3.0)

project(User)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

aux_source_directory(./src DIR_SRCS)

add_executable(cmake2 ${DIR_SRCS})
