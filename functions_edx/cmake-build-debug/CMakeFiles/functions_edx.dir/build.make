# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\shahins\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shahins\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\shahins\CLionProjects\functions_edx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/functions_edx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functions_edx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functions_edx.dir/flags.make

CMakeFiles/functions_edx.dir/main.cpp.obj: CMakeFiles/functions_edx.dir/flags.make
CMakeFiles/functions_edx.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functions_edx.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\functions_edx.dir\main.cpp.obj -c C:\Users\shahins\CLionProjects\functions_edx\main.cpp

CMakeFiles/functions_edx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functions_edx.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\shahins\CLionProjects\functions_edx\main.cpp > CMakeFiles\functions_edx.dir\main.cpp.i

CMakeFiles/functions_edx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functions_edx.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\shahins\CLionProjects\functions_edx\main.cpp -o CMakeFiles\functions_edx.dir\main.cpp.s

# Object files for target functions_edx
functions_edx_OBJECTS = \
"CMakeFiles/functions_edx.dir/main.cpp.obj"

# External object files for target functions_edx
functions_edx_EXTERNAL_OBJECTS =

functions_edx.exe: CMakeFiles/functions_edx.dir/main.cpp.obj
functions_edx.exe: CMakeFiles/functions_edx.dir/build.make
functions_edx.exe: CMakeFiles/functions_edx.dir/linklibs.rsp
functions_edx.exe: CMakeFiles/functions_edx.dir/objects1.rsp
functions_edx.exe: CMakeFiles/functions_edx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable functions_edx.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\functions_edx.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functions_edx.dir/build: functions_edx.exe

.PHONY : CMakeFiles/functions_edx.dir/build

CMakeFiles/functions_edx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\functions_edx.dir\cmake_clean.cmake
.PHONY : CMakeFiles/functions_edx.dir/clean

CMakeFiles/functions_edx.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\shahins\CLionProjects\functions_edx C:\Users\shahins\CLionProjects\functions_edx C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug C:\Users\shahins\CLionProjects\functions_edx\cmake-build-debug\CMakeFiles\functions_edx.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functions_edx.dir/depend
