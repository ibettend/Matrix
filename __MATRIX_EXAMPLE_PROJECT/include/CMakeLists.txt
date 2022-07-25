## Need to use CMake version 3.13 or higher ##
cmake_minimum_required(VERSION 3.13)

## This is a subproject and it has its own scope unless the variables are ..
#.. global. ##
set(Subproject_Name_VUsr "include")
project(${Subproject_Name_VUsr}) # Name the Subproject

## Add source files not to the subproject, but the project in general. ##
target_include_directories(${CMAKE_PROJECT_NAME}
  PUBLIC
    ./
  )
