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
include CMakeFiles/GIRLSNBYS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GIRLSNBYS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GIRLSNBYS.dir/flags.make

CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o: CMakeFiles/GIRLSNBYS.dir/flags.make
CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o: ../SOLUTIONS/GIRLSNBYS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/GIRLSNBYS.cpp

CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/GIRLSNBYS.cpp > CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.i

CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/GIRLSNBYS.cpp -o CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.s

# Object files for target GIRLSNBYS
GIRLSNBYS_OBJECTS = \
"CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o"

# External object files for target GIRLSNBYS
GIRLSNBYS_EXTERNAL_OBJECTS =

GIRLSNBYS: CMakeFiles/GIRLSNBYS.dir/SOLUTIONS/GIRLSNBYS.cpp.o
GIRLSNBYS: CMakeFiles/GIRLSNBYS.dir/build.make
GIRLSNBYS: CMakeFiles/GIRLSNBYS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GIRLSNBYS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GIRLSNBYS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GIRLSNBYS.dir/build: GIRLSNBYS

.PHONY : CMakeFiles/GIRLSNBYS.dir/build

CMakeFiles/GIRLSNBYS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GIRLSNBYS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GIRLSNBYS.dir/clean

CMakeFiles/GIRLSNBYS.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/GIRLSNBYS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GIRLSNBYS.dir/depend

