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
include CMakeFiles/CANTON.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CANTON.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CANTON.dir/flags.make

CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o: CMakeFiles/CANTON.dir/flags.make
CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o: ../SOLUTIONS/CANTON.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/CANTON.cpp

CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/CANTON.cpp > CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.i

CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/CANTON.cpp -o CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.s

# Object files for target CANTON
CANTON_OBJECTS = \
"CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o"

# External object files for target CANTON
CANTON_EXTERNAL_OBJECTS =

CANTON: CMakeFiles/CANTON.dir/SOLUTIONS/CANTON.cpp.o
CANTON: CMakeFiles/CANTON.dir/build.make
CANTON: CMakeFiles/CANTON.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CANTON"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CANTON.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CANTON.dir/build: CANTON

.PHONY : CMakeFiles/CANTON.dir/build

CMakeFiles/CANTON.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CANTON.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CANTON.dir/clean

CMakeFiles/CANTON.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/CANTON.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CANTON.dir/depend

