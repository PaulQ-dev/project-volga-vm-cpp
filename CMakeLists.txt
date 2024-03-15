cmake_minimum_required(VERSION 3.20)

add_executable(volga "src/main.cpp")

add_library(volgaMachine SHARED "src/Volga-machine/machine.cpp")
link_libraries(volga volgaMachine)