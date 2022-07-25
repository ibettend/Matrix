## Need to use CMake version 3.13 or higher ##
cmake_minimum_required(VERSION 3.13)

## This is a subproject and it has its own scope unless the variables are ..
#.. global. ##
set(Subproject_Name_VUsr "src")
project(${Subproject_Name_VUsr}) # Name the Subproject

## Add source files not to the subproject, but the main project. ##
target_sources(${CMAKE_PROJECT_NAME}
  PUBLIC
    ./Matrix_Non_Dynamic_2-0_Library.cpp
  )
