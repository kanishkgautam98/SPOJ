# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/kanishk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/kanishk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kanishk/CLionProjects/SPOJ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanishk/CLionProjects/SPOJ/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EULER.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EULER.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EULER.dir/flags.make

CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o: CMakeFiles/EULER.dir/flags.make
CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o: ../SOLUTIONS/EULER.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/EULER.cpp

CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/EULER.cpp > CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.i

CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/EULER.cpp -o CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.s

# Object files for target EULER
EULER_OBJECTS = \
"CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o"

# External object files for target EULER
EULER_EXTERNAL_OBJECTS =

EULER: CMakeFiles/EULER.dir/SOLUTIONS/EULER.cpp.o
EULER: CMakeFiles/EULER.dir/build.make
EULER: CMakeFiles/EULER.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EULER"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EULER.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EULER.dir/build: EULER

.PHONY : CMakeFiles/EULER.dir/build

CMakeFiles/EULER.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EULER.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EULER.dir/clean

CMakeFiles/EULER.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/EULER.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EULER.dir/depend
