# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2"

# Include any dependencies generated for this target.
include CMakeFiles/executable.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/executable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/executable.dir/flags.make

CMakeFiles/executable.dir/main.cc.o: CMakeFiles/executable.dir/flags.make
CMakeFiles/executable.dir/main.cc.o: main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/executable.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/executable.dir/main.cc.o -c "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/main.cc"

CMakeFiles/executable.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/executable.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/main.cc" > CMakeFiles/executable.dir/main.cc.i

CMakeFiles/executable.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/executable.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/main.cc" -o CMakeFiles/executable.dir/main.cc.s

CMakeFiles/executable.dir/add.cc.o: CMakeFiles/executable.dir/flags.make
CMakeFiles/executable.dir/add.cc.o: add.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/executable.dir/add.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/executable.dir/add.cc.o -c "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/add.cc"

CMakeFiles/executable.dir/add.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/executable.dir/add.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/add.cc" > CMakeFiles/executable.dir/add.cc.i

CMakeFiles/executable.dir/add.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/executable.dir/add.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/add.cc" -o CMakeFiles/executable.dir/add.cc.s

# Object files for target executable
executable_OBJECTS = \
"CMakeFiles/executable.dir/main.cc.o" \
"CMakeFiles/executable.dir/add.cc.o"

# External object files for target executable
executable_EXTERNAL_OBJECTS =

executable: CMakeFiles/executable.dir/main.cc.o
executable: CMakeFiles/executable.dir/add.cc.o
executable: CMakeFiles/executable.dir/build.make
executable: CMakeFiles/executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable executable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/executable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/executable.dir/build: executable

.PHONY : CMakeFiles/executable.dir/build

CMakeFiles/executable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/executable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/executable.dir/clean

CMakeFiles/executable.dir/depend:
	cd "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter9/ex 9.2/CMakeFiles/executable.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/executable.dir/depend

