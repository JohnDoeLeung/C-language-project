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
CMAKE_SOURCE_DIR = D:\Desktop\C\ex9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Desktop\C\ex9\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex9.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex9.dir/flags.make

CMakeFiles/ex9.dir/main.c.obj: CMakeFiles/ex9.dir/flags.make
CMakeFiles/ex9.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\C\ex9\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex9.dir/main.c.obj"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex9.dir\main.c.obj -c D:\Desktop\C\ex9\main.c

CMakeFiles/ex9.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex9.dir/main.c.i"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Desktop\C\ex9\main.c > CMakeFiles\ex9.dir\main.c.i

CMakeFiles/ex9.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex9.dir/main.c.s"
	D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Desktop\C\ex9\main.c -o CMakeFiles\ex9.dir\main.c.s

# Object files for target ex9
ex9_OBJECTS = \
"CMakeFiles/ex9.dir/main.c.obj"

# External object files for target ex9
ex9_EXTERNAL_OBJECTS =

ex9.exe: CMakeFiles/ex9.dir/main.c.obj
ex9.exe: CMakeFiles/ex9.dir/build.make
ex9.exe: CMakeFiles/ex9.dir/linklibs.rsp
ex9.exe: CMakeFiles/ex9.dir/objects1.rsp
ex9.exe: CMakeFiles/ex9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\C\ex9\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex9.dir/build: ex9.exe
.PHONY : CMakeFiles/ex9.dir/build

CMakeFiles/ex9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex9.dir/clean

CMakeFiles/ex9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\C\ex9 D:\Desktop\C\ex9 D:\Desktop\C\ex9\cmake-build-debug D:\Desktop\C\ex9\cmake-build-debug D:\Desktop\C\ex9\cmake-build-debug\CMakeFiles\ex9.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex9.dir/depend

