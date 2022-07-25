####### CMake Project Header ###################################################
cmake_minimum_required(VERSION 3.13)

#project(STM_F4_USB_01)
project(Pointer_Examples_Project VERSION 0.0.0 DESCRIPTION "Example projects that illustrates pointers in C/C++.")
enable_language(CXX C ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

message(STATUS "\n\nUSER CMake is here -- VUSR_GENERATE_TYPE ${VUSR_GENERATE_TYPE}")

## CMake will configure (configuration time) a project depending on if a user..
#.. defines the project to be Debug or Release. The intention is that the..
#.. project will be configurationed multiple times.
if ( VUSR_GENERATE_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "Debug" )
  message(STATUS "\n\nUSER CMake is here -- Mad it in")
  set(Local_Libraries_Path_VUsr "${CMAKE_SOURCE_DIR}/build/Debug")
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${Local_Libraries_Path_VUsr}/static")
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${Local_Libraries_Path_VUsr}/dynamic")
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/Debug/")

elseif( VUSR_GENERATE_TYPE STREQUAL "Release" OR CMAKE_BUILD_TYPE STREQUAL "Release" )

  set(Local_Libraries_Path_VUsr "${CMAKE_SOURCE_DIR}/build/Release")
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${Local_Libraries_Path_VUsr}/static")
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${Local_Libraries_Path_VUsr}/dynamic")
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/Release")

endif()



add_executable(${CMAKE_PROJECT_NAME} "")
add_subdirectory(./include)
add_subdirectory(./src)
add_subdirectory(./libs)


message(STATUS "CMake current binary dir ${CMAKE_CURRENT_BINARY_DIR}")
### !!!!! DOCUMENT:
## That out-of-project directories, when being added by add_subdirectory, must
#.. specify a binary directory to place CMake and Make files.
#target_link_libraries(${CMAKE_PROJECT_NAME} "Test_HAL")

## Create custom commands for Unix and Windows machines to delete the `bin`..
#. and `build` directory.
if( UNIX OR MINGW OR CYGWIN )
  add_custom_target(Clean_Build_Linux_UCmd
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  COMMAND rm -rf ${CMAKE_SOURCE_DIR}/bin
  COMMAND rm -rf ${CMAKE_SOURCE_DIR}/build
  )
elseif(WIN32)
  add_custom_target(Clean_Build_Win_UCmd
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
  COMMAND rmdir /S ${CMAKE_SOURCE_DIR}/bin
  COMMAND rmdir /S ${CMAKE_SOURCE_DIR}/build
  )
endif()
