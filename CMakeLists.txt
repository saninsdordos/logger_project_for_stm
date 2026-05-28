cmake_minimum_required(VERSION 4.2.3)
set(CMAKE_CXX_STANDARD 20)
project(reader)
file(GLOB SOURCES "src/*.cpp")
add_compile_options(-g)
  


add_executable(reader  ${SOURCES})

set(Matplot++_DIR "/home/sanins/Documents/vcpkg/installed/x64-linux/share/matplot++/")
set(nodesoup_DIR "/home/sanins/Documents/vcpkg/installed/x64-linux/share/nodesoup/")
find_package(Matplot++ CONFIG REQUIRED)
find_package(nodesoup REQUIRED)
target_link_libraries(reader PRIVATE Matplot++::cimg  Matplot++::matplot)

target_include_directories(reader PRIVATE   ${PROJECT_SOURCE_DIR}/include) 
