# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build

# Include any dependencies generated for this target.
include CMakeFiles/Pointer_Examples_Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Pointer_Examples_Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Pointer_Examples_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pointer_Examples_Project.dir/flags.make

CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o: CMakeFiles/Pointer_Examples_Project.dir/flags.make
CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o: CMakeFiles/Pointer_Examples_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o -MF CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o.d -o CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o -c /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/src/main.cpp

CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/src/main.cpp > CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.i

CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/src/main.cpp -o CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.s

CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o: CMakeFiles/Pointer_Examples_Project.dir/flags.make
CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o: ../libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c
CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o: CMakeFiles/Pointer_Examples_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o -MF CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o.d -o CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o -c /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c

CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c > CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.i

CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c -o CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.s

# Object files for target Pointer_Examples_Project
Pointer_Examples_Project_OBJECTS = \
"CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o" \
"CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o"

# External object files for target Pointer_Examples_Project
Pointer_Examples_Project_EXTERNAL_OBJECTS =

../bin/Debug/Pointer_Examples_Project: CMakeFiles/Pointer_Examples_Project.dir/src/main.cpp.o
../bin/Debug/Pointer_Examples_Project: CMakeFiles/Pointer_Examples_Project.dir/libs/Return_Function_Pointer_Example_Library/src/return_function_pointer_example.c.o
../bin/Debug/Pointer_Examples_Project: CMakeFiles/Pointer_Examples_Project.dir/build.make
../bin/Debug/Pointer_Examples_Project: CMakeFiles/Pointer_Examples_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/Debug/Pointer_Examples_Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pointer_Examples_Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pointer_Examples_Project.dir/build: ../bin/Debug/Pointer_Examples_Project
.PHONY : CMakeFiles/Pointer_Examples_Project.dir/build

CMakeFiles/Pointer_Examples_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pointer_Examples_Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pointer_Examples_Project.dir/clean

CMakeFiles/Pointer_Examples_Project.dir/depend:
	cd /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build /home/ibettendorf/Documents/Software_Projects/Cpp/x86_Projects/__EXAMPLE_PROJECTS/__POINTER_EXAMPLES_PROJECT/build/CMakeFiles/Pointer_Examples_Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pointer_Examples_Project.dir/depend
