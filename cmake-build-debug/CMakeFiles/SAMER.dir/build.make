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
include CMakeFiles/SAMER.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SAMER.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SAMER.dir/flags.make

CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o: CMakeFiles/SAMER.dir/flags.make
CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o: ../SOLUTIONS/SAMER08C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C.cpp

CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C.cpp > CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.i

CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C.cpp -o CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.s

# Object files for target SAMER
SAMER_OBJECTS = \
"CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o"

# External object files for target SAMER
SAMER_EXTERNAL_OBJECTS =

SAMER: CMakeFiles/SAMER.dir/SOLUTIONS/SAMER08C.cpp.o
SAMER: CMakeFiles/SAMER.dir/build.make
SAMER: CMakeFiles/SAMER.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SAMER"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SAMER.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SAMER.dir/build: SAMER

.PHONY : CMakeFiles/SAMER.dir/build

CMakeFiles/SAMER.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SAMER.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SAMER.dir/clean

CMakeFiles/SAMER.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/SAMER.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SAMER.dir/depend
