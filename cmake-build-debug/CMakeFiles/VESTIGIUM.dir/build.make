# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/kanishk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/kanishk/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kanishk/CLionProjects/SPOJ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanishk/CLionProjects/SPOJ/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/VESTIGIUM.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VESTIGIUM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VESTIGIUM.dir/flags.make

CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o: CMakeFiles/VESTIGIUM.dir/flags.make
CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o: ../SOLUTIONS/VESTIGIUM.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/VESTIGIUM.cpp

CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/VESTIGIUM.cpp > CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.i

CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/VESTIGIUM.cpp -o CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.s

# Object files for target VESTIGIUM
VESTIGIUM_OBJECTS = \
"CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o"

# External object files for target VESTIGIUM
VESTIGIUM_EXTERNAL_OBJECTS =

VESTIGIUM: CMakeFiles/VESTIGIUM.dir/SOLUTIONS/VESTIGIUM.cpp.o
VESTIGIUM: CMakeFiles/VESTIGIUM.dir/build.make
VESTIGIUM: CMakeFiles/VESTIGIUM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VESTIGIUM"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VESTIGIUM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VESTIGIUM.dir/build: VESTIGIUM

.PHONY : CMakeFiles/VESTIGIUM.dir/build

CMakeFiles/VESTIGIUM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VESTIGIUM.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VESTIGIUM.dir/clean

CMakeFiles/VESTIGIUM.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/VESTIGIUM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VESTIGIUM.dir/depend

