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
include CMakeFiles/TestCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestCode.dir/flags.make

CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o: CMakeFiles/TestCode.dir/flags.make
CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o: ../SOLUTIONS/TestCode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o -c /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/TestCode.cpp

CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/TestCode.cpp > CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.i

CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanishk/CLionProjects/SPOJ/SOLUTIONS/TestCode.cpp -o CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.s

# Object files for target TestCode
TestCode_OBJECTS = \
"CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o"

# External object files for target TestCode
TestCode_EXTERNAL_OBJECTS =

TestCode: CMakeFiles/TestCode.dir/SOLUTIONS/TestCode.cpp.o
TestCode: CMakeFiles/TestCode.dir/build.make
TestCode: CMakeFiles/TestCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestCode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestCode.dir/build: TestCode

.PHONY : CMakeFiles/TestCode.dir/build

CMakeFiles/TestCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestCode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestCode.dir/clean

CMakeFiles/TestCode.dir/depend:
	cd /home/kanishk/CLionProjects/SPOJ/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug /home/kanishk/CLionProjects/SPOJ/cmake-build-debug/CMakeFiles/TestCode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestCode.dir/depend

