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
include CMakeFiles/SAMER08C-Candy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SAMER08C-Candy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SAMER08C-Candy.dir/flags.make

CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o: CMakeFiles/SAMER08C-Candy.dir/flags.make
CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o: ../SOLUTIONS/SAMER08C-Candy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C-Candy.cpp

CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C-Candy.cpp > CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.i

CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/SAMER08C-Candy.cpp -o CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.s

# Object files for target SAMER08C-Candy
SAMER08C__Candy_OBJECTS = \
"CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o"

# External object files for target SAMER08C-Candy
SAMER08C__Candy_EXTERNAL_OBJECTS =

SAMER08C-Candy: CMakeFiles/SAMER08C-Candy.dir/SOLUTIONS/SAMER08C-Candy.cpp.o
SAMER08C-Candy: CMakeFiles/SAMER08C-Candy.dir/build.make
SAMER08C-Candy: CMakeFiles/SAMER08C-Candy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SAMER08C-Candy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SAMER08C-Candy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SAMER08C-Candy.dir/build: SAMER08C-Candy

.PHONY : CMakeFiles/SAMER08C-Candy.dir/build

CMakeFiles/SAMER08C-Candy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SAMER08C-Candy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SAMER08C-Candy.dir/clean

CMakeFiles/SAMER08C-Candy.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/SAMER08C-Candy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SAMER08C-Candy.dir/depend

