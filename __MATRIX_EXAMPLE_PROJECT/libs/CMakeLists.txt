## Need to use CMake version 3.13 or higher ##
cmake_minimum_required(VERSION 3.13)

## This is a subproject and it has its own scope unless the variables are ..
#.. global. ##
set(Subproject_Name_VUsr "libs")
project(${Subproject_Name_VUsr}) # Name the Subproject

add_subdirectory(./Return_Function_Pointer_Example_Library)
