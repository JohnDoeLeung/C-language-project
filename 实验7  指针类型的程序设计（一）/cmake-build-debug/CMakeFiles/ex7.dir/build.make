# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Desktop\C\ex7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Desktop\C\ex7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex7.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex7.dir/flags.make

CMakeFiles/ex7.dir/main.c.obj: CMakeFiles/ex7.dir/flags.make
CMakeFiles/ex7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\C\ex7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex7.dir/main.c.obj"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex7.dir\main.c.obj -c D:\Desktop\C\ex7\main.c

CMakeFiles/ex7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex7.dir/main.c.i"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Desktop\C\ex7\main.c > CMakeFiles\ex7.dir\main.c.i

CMakeFiles/ex7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex7.dir/main.c.s"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Desktop\C\ex7\main.c -o CMakeFiles\ex7.dir\main.c.s

# Object files for target ex7
ex7_OBJECTS = \
"CMakeFiles/ex7.dir/main.c.obj"

# External object files for target ex7
ex7_EXTERNAL_OBJECTS =

ex7.exe: CMakeFiles/ex7.dir/main.c.obj
ex7.exe: CMakeFiles/ex7.dir/build.make
ex7.exe: CMakeFiles/ex7.dir/linklibs.rsp
ex7.exe: CMakeFiles/ex7.dir/objects1.rsp
ex7.exe: CMakeFiles/ex7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\C\ex7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex7.dir/build: ex7.exe
.PHONY : CMakeFiles/ex7.dir/build

CMakeFiles/ex7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex7.dir/clean

CMakeFiles/ex7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\C\ex7 D:\Desktop\C\ex7 D:\Desktop\C\ex7\cmake-build-debug D:\Desktop\C\ex7\cmake-build-debug D:\Desktop\C\ex7\cmake-build-debug\CMakeFiles\ex7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex7.dir/depend

