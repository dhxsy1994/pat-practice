# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hessen/pat-practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hessen/pat-practice/_builds

# Include any dependencies generated for this target.
include chapter3/CMakeFiles/pat-b1032.dir/depend.make

# Include the progress variables for this target.
include chapter3/CMakeFiles/pat-b1032.dir/progress.make

# Include the compile flags for this target's objects.
include chapter3/CMakeFiles/pat-b1032.dir/flags.make

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o: chapter3/CMakeFiles/pat-b1032.dir/flags.make
chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o: ../chapter3/pat-b1032.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hessen/pat-practice/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o"
	cd /home/hessen/pat-practice/_builds/chapter3 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pat-b1032.dir/pat-b1032.c.o   -c /home/hessen/pat-practice/chapter3/pat-b1032.c

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pat-b1032.dir/pat-b1032.c.i"
	cd /home/hessen/pat-practice/_builds/chapter3 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hessen/pat-practice/chapter3/pat-b1032.c > CMakeFiles/pat-b1032.dir/pat-b1032.c.i

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pat-b1032.dir/pat-b1032.c.s"
	cd /home/hessen/pat-practice/_builds/chapter3 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hessen/pat-practice/chapter3/pat-b1032.c -o CMakeFiles/pat-b1032.dir/pat-b1032.c.s

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.requires:

.PHONY : chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.requires

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.provides: chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.requires
	$(MAKE) -f chapter3/CMakeFiles/pat-b1032.dir/build.make chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.provides.build
.PHONY : chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.provides

chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.provides.build: chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o


# Object files for target pat-b1032
pat__b1032_OBJECTS = \
"CMakeFiles/pat-b1032.dir/pat-b1032.c.o"

# External object files for target pat-b1032
pat__b1032_EXTERNAL_OBJECTS =

chapter3/pat-b1032: chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o
chapter3/pat-b1032: chapter3/CMakeFiles/pat-b1032.dir/build.make
chapter3/pat-b1032: chapter3/CMakeFiles/pat-b1032.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hessen/pat-practice/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pat-b1032"
	cd /home/hessen/pat-practice/_builds/chapter3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pat-b1032.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
chapter3/CMakeFiles/pat-b1032.dir/build: chapter3/pat-b1032

.PHONY : chapter3/CMakeFiles/pat-b1032.dir/build

chapter3/CMakeFiles/pat-b1032.dir/requires: chapter3/CMakeFiles/pat-b1032.dir/pat-b1032.c.o.requires

.PHONY : chapter3/CMakeFiles/pat-b1032.dir/requires

chapter3/CMakeFiles/pat-b1032.dir/clean:
	cd /home/hessen/pat-practice/_builds/chapter3 && $(CMAKE_COMMAND) -P CMakeFiles/pat-b1032.dir/cmake_clean.cmake
.PHONY : chapter3/CMakeFiles/pat-b1032.dir/clean

chapter3/CMakeFiles/pat-b1032.dir/depend:
	cd /home/hessen/pat-practice/_builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hessen/pat-practice /home/hessen/pat-practice/chapter3 /home/hessen/pat-practice/_builds /home/hessen/pat-practice/_builds/chapter3 /home/hessen/pat-practice/_builds/chapter3/CMakeFiles/pat-b1032.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : chapter3/CMakeFiles/pat-b1032.dir/depend

