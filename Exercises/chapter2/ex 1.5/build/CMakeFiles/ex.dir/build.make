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
CMAKE_SOURCE_DIR = "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build"

# Include any dependencies generated for this target.
include CMakeFiles/ex.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex.dir/flags.make

CMakeFiles/ex.dir/main.cc.o: CMakeFiles/ex.dir/flags.make
CMakeFiles/ex.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex.dir/main.cc.o -c "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/main.cc"

CMakeFiles/ex.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/main.cc" > CMakeFiles/ex.dir/main.cc.i

CMakeFiles/ex.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/main.cc" -o CMakeFiles/ex.dir/main.cc.s

CMakeFiles/ex.dir/extra.cpp.o: CMakeFiles/ex.dir/flags.make
CMakeFiles/ex.dir/extra.cpp.o: ../extra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex.dir/extra.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex.dir/extra.cpp.o -c "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/extra.cpp"

CMakeFiles/ex.dir/extra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex.dir/extra.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/extra.cpp" > CMakeFiles/ex.dir/extra.cpp.i

CMakeFiles/ex.dir/extra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex.dir/extra.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/extra.cpp" -o CMakeFiles/ex.dir/extra.cpp.s

# Object files for target ex
ex_OBJECTS = \
"CMakeFiles/ex.dir/main.cc.o" \
"CMakeFiles/ex.dir/extra.cpp.o"

# External object files for target ex
ex_EXTERNAL_OBJECTS =

ex: CMakeFiles/ex.dir/main.cc.o
ex: CMakeFiles/ex.dir/extra.cpp.o
ex: CMakeFiles/ex.dir/build.make
ex: CMakeFiles/ex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex.dir/build: ex

.PHONY : CMakeFiles/ex.dir/build

CMakeFiles/ex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex.dir/clean

CMakeFiles/ex.dir/depend:
	cd "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build" "/home/jorge/Documents/2-Programming/C++ course/Exercises/chapter2/ex 1.5/build/CMakeFiles/ex.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex.dir/depend

