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
include CMakeFiles/BEENUMS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BEENUMS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BEENUMS.dir/flags.make

CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o: CMakeFiles/BEENUMS.dir/flags.make
CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o: ../SOLUTIONS/BEENUMS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/BEENUMS.cpp

CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/BEENUMS.cpp > CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.i

CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/BEENUMS.cpp -o CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.s

# Object files for target BEENUMS
BEENUMS_OBJECTS = \
"CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o"

# External object files for target BEENUMS
BEENUMS_EXTERNAL_OBJECTS =

BEENUMS: CMakeFiles/BEENUMS.dir/SOLUTIONS/BEENUMS.cpp.o
BEENUMS: CMakeFiles/BEENUMS.dir/build.make
BEENUMS: CMakeFiles/BEENUMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BEENUMS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BEENUMS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BEENUMS.dir/build: BEENUMS

.PHONY : CMakeFiles/BEENUMS.dir/build

CMakeFiles/BEENUMS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BEENUMS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BEENUMS.dir/clean

CMakeFiles/BEENUMS.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/BEENUMS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BEENUMS.dir/depend

