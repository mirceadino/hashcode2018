# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/CLionProjects/hashcode2018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/CLionProjects/hashcode2018/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hashcode2018.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hashcode2018.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hashcode2018.dir/flags.make

CMakeFiles/hashcode2018.dir/src/main.cpp.o: CMakeFiles/hashcode2018.dir/flags.make
CMakeFiles/hashcode2018.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/hashcode2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hashcode2018.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashcode2018.dir/src/main.cpp.o -c /home/alex/CLionProjects/hashcode2018/src/main.cpp

CMakeFiles/hashcode2018.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashcode2018.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/hashcode2018/src/main.cpp > CMakeFiles/hashcode2018.dir/src/main.cpp.i

CMakeFiles/hashcode2018.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashcode2018.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/hashcode2018/src/main.cpp -o CMakeFiles/hashcode2018.dir/src/main.cpp.s

CMakeFiles/hashcode2018.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/hashcode2018.dir/src/main.cpp.o.requires

CMakeFiles/hashcode2018.dir/src/main.cpp.o.provides: CMakeFiles/hashcode2018.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/hashcode2018.dir/build.make CMakeFiles/hashcode2018.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/hashcode2018.dir/src/main.cpp.o.provides

CMakeFiles/hashcode2018.dir/src/main.cpp.o.provides.build: CMakeFiles/hashcode2018.dir/src/main.cpp.o


CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o: CMakeFiles/hashcode2018.dir/flags.make
CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o: ../src/solver/uber_solver/uber_solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/hashcode2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o -c /home/alex/CLionProjects/hashcode2018/src/solver/uber_solver/uber_solver.cpp

CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/hashcode2018/src/solver/uber_solver/uber_solver.cpp > CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.i

CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/hashcode2018/src/solver/uber_solver/uber_solver.cpp -o CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.s

CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.requires:

.PHONY : CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.requires

CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.provides: CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.requires
	$(MAKE) -f CMakeFiles/hashcode2018.dir/build.make CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.provides.build
.PHONY : CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.provides

CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.provides.build: CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o


CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o: CMakeFiles/hashcode2018.dir/flags.make
CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o: ../src/solver/my_solver/my_solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/CLionProjects/hashcode2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o -c /home/alex/CLionProjects/hashcode2018/src/solver/my_solver/my_solver.cpp

CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/CLionProjects/hashcode2018/src/solver/my_solver/my_solver.cpp > CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.i

CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/CLionProjects/hashcode2018/src/solver/my_solver/my_solver.cpp -o CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.s

CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.requires:

.PHONY : CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.requires

CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.provides: CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.requires
	$(MAKE) -f CMakeFiles/hashcode2018.dir/build.make CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.provides.build
.PHONY : CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.provides

CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.provides.build: CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o


# Object files for target hashcode2018
hashcode2018_OBJECTS = \
"CMakeFiles/hashcode2018.dir/src/main.cpp.o" \
"CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o" \
"CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o"

# External object files for target hashcode2018
hashcode2018_EXTERNAL_OBJECTS =

hashcode2018: CMakeFiles/hashcode2018.dir/src/main.cpp.o
hashcode2018: CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o
hashcode2018: CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o
hashcode2018: CMakeFiles/hashcode2018.dir/build.make
hashcode2018: CMakeFiles/hashcode2018.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/CLionProjects/hashcode2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hashcode2018"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hashcode2018.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hashcode2018.dir/build: hashcode2018

.PHONY : CMakeFiles/hashcode2018.dir/build

CMakeFiles/hashcode2018.dir/requires: CMakeFiles/hashcode2018.dir/src/main.cpp.o.requires
CMakeFiles/hashcode2018.dir/requires: CMakeFiles/hashcode2018.dir/src/solver/uber_solver/uber_solver.cpp.o.requires
CMakeFiles/hashcode2018.dir/requires: CMakeFiles/hashcode2018.dir/src/solver/my_solver/my_solver.cpp.o.requires

.PHONY : CMakeFiles/hashcode2018.dir/requires

CMakeFiles/hashcode2018.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hashcode2018.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hashcode2018.dir/clean

CMakeFiles/hashcode2018.dir/depend:
	cd /home/alex/CLionProjects/hashcode2018/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/CLionProjects/hashcode2018 /home/alex/CLionProjects/hashcode2018 /home/alex/CLionProjects/hashcode2018/cmake-build-debug /home/alex/CLionProjects/hashcode2018/cmake-build-debug /home/alex/CLionProjects/hashcode2018/cmake-build-debug/CMakeFiles/hashcode2018.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hashcode2018.dir/depend

