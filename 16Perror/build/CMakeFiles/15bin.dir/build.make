# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/egorkirichenko/Projects/C/16Perror

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/egorkirichenko/Projects/C/16Perror/build

# Include any dependencies generated for this target.
include CMakeFiles/15bin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/15bin.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/15bin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/15bin.dir/flags.make

CMakeFiles/15bin.dir/main.c.o: CMakeFiles/15bin.dir/flags.make
CMakeFiles/15bin.dir/main.c.o: /Users/egorkirichenko/Projects/C/16Perror/main.c
CMakeFiles/15bin.dir/main.c.o: CMakeFiles/15bin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/16Perror/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/15bin.dir/main.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/15bin.dir/main.c.o -MF CMakeFiles/15bin.dir/main.c.o.d -o CMakeFiles/15bin.dir/main.c.o -c /Users/egorkirichenko/Projects/C/16Perror/main.c

CMakeFiles/15bin.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/15bin.dir/main.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/16Perror/main.c > CMakeFiles/15bin.dir/main.c.i

CMakeFiles/15bin.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/15bin.dir/main.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/16Perror/main.c -o CMakeFiles/15bin.dir/main.c.s

CMakeFiles/15bin.dir/student.c.o: CMakeFiles/15bin.dir/flags.make
CMakeFiles/15bin.dir/student.c.o: /Users/egorkirichenko/Projects/C/16Perror/student.c
CMakeFiles/15bin.dir/student.c.o: CMakeFiles/15bin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/16Perror/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/15bin.dir/student.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/15bin.dir/student.c.o -MF CMakeFiles/15bin.dir/student.c.o.d -o CMakeFiles/15bin.dir/student.c.o -c /Users/egorkirichenko/Projects/C/16Perror/student.c

CMakeFiles/15bin.dir/student.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/15bin.dir/student.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/16Perror/student.c > CMakeFiles/15bin.dir/student.c.i

CMakeFiles/15bin.dir/student.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/15bin.dir/student.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/16Perror/student.c -o CMakeFiles/15bin.dir/student.c.s

CMakeFiles/15bin.dir/stack.c.o: CMakeFiles/15bin.dir/flags.make
CMakeFiles/15bin.dir/stack.c.o: /Users/egorkirichenko/Projects/C/16Perror/stack.c
CMakeFiles/15bin.dir/stack.c.o: CMakeFiles/15bin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/16Perror/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/15bin.dir/stack.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/15bin.dir/stack.c.o -MF CMakeFiles/15bin.dir/stack.c.o.d -o CMakeFiles/15bin.dir/stack.c.o -c /Users/egorkirichenko/Projects/C/16Perror/stack.c

CMakeFiles/15bin.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/15bin.dir/stack.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/16Perror/stack.c > CMakeFiles/15bin.dir/stack.c.i

CMakeFiles/15bin.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/15bin.dir/stack.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/16Perror/stack.c -o CMakeFiles/15bin.dir/stack.c.s

# Object files for target 15bin
15bin_OBJECTS = \
"CMakeFiles/15bin.dir/main.c.o" \
"CMakeFiles/15bin.dir/student.c.o" \
"CMakeFiles/15bin.dir/stack.c.o"

# External object files for target 15bin
15bin_EXTERNAL_OBJECTS =

15bin: CMakeFiles/15bin.dir/main.c.o
15bin: CMakeFiles/15bin.dir/student.c.o
15bin: CMakeFiles/15bin.dir/stack.c.o
15bin: CMakeFiles/15bin.dir/build.make
15bin: CMakeFiles/15bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/egorkirichenko/Projects/C/16Perror/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable 15bin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/15bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/15bin.dir/build: 15bin
.PHONY : CMakeFiles/15bin.dir/build

CMakeFiles/15bin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/15bin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/15bin.dir/clean

CMakeFiles/15bin.dir/depend:
	cd /Users/egorkirichenko/Projects/C/16Perror/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/egorkirichenko/Projects/C/16Perror /Users/egorkirichenko/Projects/C/16Perror /Users/egorkirichenko/Projects/C/16Perror/build /Users/egorkirichenko/Projects/C/16Perror/build /Users/egorkirichenko/Projects/C/16Perror/build/CMakeFiles/15bin.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/15bin.dir/depend

