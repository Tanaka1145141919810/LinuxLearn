# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/looksaw/looksawCode/LinuxLearn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/looksaw/looksawCode/LinuxLearn/build

# Include any dependencies generated for this target.
include CMakeFiles/LinuxLearn.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LinuxLearn.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LinuxLearn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinuxLearn.dir/flags.make

CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o: CMakeFiles/LinuxLearn.dir/flags.make
CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o: /home/looksaw/looksawCode/LinuxLearn/src/pthread_mutex1.c
CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o: CMakeFiles/LinuxLearn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/looksaw/looksawCode/LinuxLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o -MF CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o.d -o CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o -c /home/looksaw/looksawCode/LinuxLearn/src/pthread_mutex1.c

CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/looksaw/looksawCode/LinuxLearn/src/pthread_mutex1.c > CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.i

CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/looksaw/looksawCode/LinuxLearn/src/pthread_mutex1.c -o CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.s

# Object files for target LinuxLearn
LinuxLearn_OBJECTS = \
"CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o"

# External object files for target LinuxLearn
LinuxLearn_EXTERNAL_OBJECTS =

LinuxLearn: CMakeFiles/LinuxLearn.dir/src/pthread_mutex1.c.o
LinuxLearn: CMakeFiles/LinuxLearn.dir/build.make
LinuxLearn: CMakeFiles/LinuxLearn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/looksaw/looksawCode/LinuxLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LinuxLearn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinuxLearn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinuxLearn.dir/build: LinuxLearn
.PHONY : CMakeFiles/LinuxLearn.dir/build

CMakeFiles/LinuxLearn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinuxLearn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinuxLearn.dir/clean

CMakeFiles/LinuxLearn.dir/depend:
	cd /home/looksaw/looksawCode/LinuxLearn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/looksaw/looksawCode/LinuxLearn /home/looksaw/looksawCode/LinuxLearn /home/looksaw/looksawCode/LinuxLearn/build /home/looksaw/looksawCode/LinuxLearn/build /home/looksaw/looksawCode/LinuxLearn/build/CMakeFiles/LinuxLearn.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LinuxLearn.dir/depend

