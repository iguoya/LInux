# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/tiger/linux/GTK/17-Frame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tiger/linux/GTK/cmake-build-Debug/17-Frame

# Include any dependencies generated for this target.
include CMakeFiles/17-Frame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/17-Frame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/17-Frame.dir/flags.make

CMakeFiles/17-Frame.dir/main.c.o: CMakeFiles/17-Frame.dir/flags.make
CMakeFiles/17-Frame.dir/main.c.o: /home/tiger/linux/GTK/17-Frame/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tiger/linux/GTK/cmake-build-Debug/17-Frame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/17-Frame.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -g -Wall -O0 -pthread -o CMakeFiles/17-Frame.dir/main.c.o   -c /home/tiger/linux/GTK/17-Frame/main.c

CMakeFiles/17-Frame.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/17-Frame.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -g -Wall -O0 -pthread -E /home/tiger/linux/GTK/17-Frame/main.c > CMakeFiles/17-Frame.dir/main.c.i

CMakeFiles/17-Frame.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/17-Frame.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS)  -g -Wall -O0 -pthread -S /home/tiger/linux/GTK/17-Frame/main.c -o CMakeFiles/17-Frame.dir/main.c.s

# Object files for target 17-Frame
17__Frame_OBJECTS = \
"CMakeFiles/17-Frame.dir/main.c.o"

# External object files for target 17-Frame
17__Frame_EXTERNAL_OBJECTS =

/home/tiger/linux/GTK/cmake-build-Debug/output/17-Frame: CMakeFiles/17-Frame.dir/main.c.o
/home/tiger/linux/GTK/cmake-build-Debug/output/17-Frame: CMakeFiles/17-Frame.dir/build.make
/home/tiger/linux/GTK/cmake-build-Debug/output/17-Frame: CMakeFiles/17-Frame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tiger/linux/GTK/cmake-build-Debug/17-Frame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/tiger/linux/GTK/cmake-build-Debug/output/17-Frame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/17-Frame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/17-Frame.dir/build: /home/tiger/linux/GTK/cmake-build-Debug/output/17-Frame

.PHONY : CMakeFiles/17-Frame.dir/build

CMakeFiles/17-Frame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/17-Frame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/17-Frame.dir/clean

CMakeFiles/17-Frame.dir/depend:
	cd /home/tiger/linux/GTK/cmake-build-Debug/17-Frame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tiger/linux/GTK/17-Frame /home/tiger/linux/GTK/17-Frame /home/tiger/linux/GTK/cmake-build-Debug/17-Frame /home/tiger/linux/GTK/cmake-build-Debug/17-Frame /home/tiger/linux/GTK/cmake-build-Debug/17-Frame/CMakeFiles/17-Frame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/17-Frame.dir/depend

