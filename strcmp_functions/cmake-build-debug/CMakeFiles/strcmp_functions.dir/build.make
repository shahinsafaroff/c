# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\shako\CLionProjects\strcmp_functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\strcmp_functions.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\strcmp_functions.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\strcmp_functions.dir\flags.make

CMakeFiles\strcmp_functions.dir\main.c.obj: CMakeFiles\strcmp_functions.dir\flags.make
CMakeFiles\strcmp_functions.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/strcmp_functions.dir/main.c.obj"
	C:\PROGRA~2\MICROS~3\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\strcmp_functions.dir\main.c.obj /FdCMakeFiles\strcmp_functions.dir\ /FS -c C:\Users\shako\CLionProjects\strcmp_functions\main.c
<<

CMakeFiles\strcmp_functions.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/strcmp_functions.dir/main.c.i"
	C:\PROGRA~2\MICROS~3\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\strcmp_functions.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\shako\CLionProjects\strcmp_functions\main.c
<<

CMakeFiles\strcmp_functions.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/strcmp_functions.dir/main.c.s"
	C:\PROGRA~2\MICROS~3\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\strcmp_functions.dir\main.c.s /c C:\Users\shako\CLionProjects\strcmp_functions\main.c
<<

# Object files for target strcmp_functions
strcmp_functions_OBJECTS = \
"CMakeFiles\strcmp_functions.dir\main.c.obj"

# External object files for target strcmp_functions
strcmp_functions_EXTERNAL_OBJECTS =

strcmp_functions.exe: CMakeFiles\strcmp_functions.dir\main.c.obj
strcmp_functions.exe: CMakeFiles\strcmp_functions.dir\build.make
strcmp_functions.exe: CMakeFiles\strcmp_functions.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable strcmp_functions.exe"
	C:\Users\shako\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\strcmp_functions.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\strcmp_functions.dir\objects1.rsp @<<
 /out:strcmp_functions.exe /implib:strcmp_functions.lib /pdb:C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug\strcmp_functions.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\strcmp_functions.dir\build: strcmp_functions.exe

.PHONY : CMakeFiles\strcmp_functions.dir\build

CMakeFiles\strcmp_functions.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\strcmp_functions.dir\cmake_clean.cmake
.PHONY : CMakeFiles\strcmp_functions.dir\clean

CMakeFiles\strcmp_functions.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\shako\CLionProjects\strcmp_functions C:\Users\shako\CLionProjects\strcmp_functions C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug C:\Users\shako\CLionProjects\strcmp_functions\cmake-build-debug\CMakeFiles\strcmp_functions.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\strcmp_functions.dir\depend

