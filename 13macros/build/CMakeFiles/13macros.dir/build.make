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
CMAKE_SOURCE_DIR = /Users/egorkirichenko/Projects/C/13macros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/egorkirichenko/Projects/C/13macros/build

# Include any dependencies generated for this target.
include CMakeFiles/13macros.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/13macros.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/13macros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/13macros.dir/flags.make

CMakeFiles/13macros.dir/main.c.o: CMakeFiles/13macros.dir/flags.make
CMakeFiles/13macros.dir/main.c.o: /Users/egorkirichenko/Projects/C/13macros/main.c
CMakeFiles/13macros.dir/main.c.o: CMakeFiles/13macros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/13macros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/13macros.dir/main.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/13macros.dir/main.c.o -MF CMakeFiles/13macros.dir/main.c.o.d -o CMakeFiles/13macros.dir/main.c.o -c /Users/egorkirichenko/Projects/C/13macros/main.c

CMakeFiles/13macros.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/13macros.dir/main.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/13macros/main.c > CMakeFiles/13macros.dir/main.c.i

CMakeFiles/13macros.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/13macros.dir/main.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/13macros/main.c -o CMakeFiles/13macros.dir/main.c.s

CMakeFiles/13macros.dir/student.c.o: CMakeFiles/13macros.dir/flags.make
CMakeFiles/13macros.dir/student.c.o: /Users/egorkirichenko/Projects/C/13macros/student.c
CMakeFiles/13macros.dir/student.c.o: CMakeFiles/13macros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/13macros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/13macros.dir/student.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/13macros.dir/student.c.o -MF CMakeFiles/13macros.dir/student.c.o.d -o CMakeFiles/13macros.dir/student.c.o -c /Users/egorkirichenko/Projects/C/13macros/student.c

CMakeFiles/13macros.dir/student.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/13macros.dir/student.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/13macros/student.c > CMakeFiles/13macros.dir/student.c.i

CMakeFiles/13macros.dir/student.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/13macros.dir/student.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/13macros/student.c -o CMakeFiles/13macros.dir/student.c.s

CMakeFiles/13macros.dir/stack.c.o: CMakeFiles/13macros.dir/flags.make
CMakeFiles/13macros.dir/stack.c.o: /Users/egorkirichenko/Projects/C/13macros/stack.c
CMakeFiles/13macros.dir/stack.c.o: CMakeFiles/13macros.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/egorkirichenko/Projects/C/13macros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/13macros.dir/stack.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/13macros.dir/stack.c.o -MF CMakeFiles/13macros.dir/stack.c.o.d -o CMakeFiles/13macros.dir/stack.c.o -c /Users/egorkirichenko/Projects/C/13macros/stack.c

CMakeFiles/13macros.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/13macros.dir/stack.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/egorkirichenko/Projects/C/13macros/stack.c > CMakeFiles/13macros.dir/stack.c.i

CMakeFiles/13macros.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/13macros.dir/stack.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/egorkirichenko/Projects/C/13macros/stack.c -o CMakeFiles/13macros.dir/stack.c.s

# Object files for target 13macros
13macros_OBJECTS = \
"CMakeFiles/13macros.dir/main.c.o" \
"CMakeFiles/13macros.dir/student.c.o" \
"CMakeFiles/13macros.dir/stack.c.o"

# External object files for target 13macros
13macros_EXTERNAL_OBJECTS =

13macros: CMakeFiles/13macros.dir/main.c.o
13macros: CMakeFiles/13macros.dir/student.c.o
13macros: CMakeFiles/13macros.dir/stack.c.o
13macros: CMakeFiles/13macros.dir/build.make
13macros: CMakeFiles/13macros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/egorkirichenko/Projects/C/13macros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable 13macros"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/13macros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/13macros.dir/build: 13macros
.PHONY : CMakeFiles/13macros.dir/build

CMakeFiles/13macros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/13macros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/13macros.dir/clean

CMakeFiles/13macros.dir/depend:
	cd /Users/egorkirichenko/Projects/C/13macros/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/egorkirichenko/Projects/C/13macros /Users/egorkirichenko/Projects/C/13macros /Users/egorkirichenko/Projects/C/13macros/build /Users/egorkirichenko/Projects/C/13macros/build /Users/egorkirichenko/Projects/C/13macros/build/CMakeFiles/13macros.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/13macros.dir/depend

