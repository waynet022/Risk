# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Flatline\Documents\Projects\Risk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Risk.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Risk.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Risk.dir\flags.make

CMakeFiles\Risk.dir\main.cpp.obj: CMakeFiles\Risk.dir\flags.make
CMakeFiles\Risk.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Risk.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Risk.dir\main.cpp.obj /FdCMakeFiles\Risk.dir\ /FS -c C:\Users\Flatline\Documents\Projects\Risk\main.cpp
<<

CMakeFiles\Risk.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Risk.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Risk.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Flatline\Documents\Projects\Risk\main.cpp
<<

CMakeFiles\Risk.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Risk.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Risk.dir\main.cpp.s /c C:\Users\Flatline\Documents\Projects\Risk\main.cpp
<<

# Object files for target Risk
Risk_OBJECTS = \
"CMakeFiles\Risk.dir\main.cpp.obj"

# External object files for target Risk
Risk_EXTERNAL_OBJECTS =

Risk.exe: CMakeFiles\Risk.dir\main.cpp.obj
Risk.exe: CMakeFiles\Risk.dir\build.make
Risk.exe: CMakeFiles\Risk.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Risk.exe"
	"C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Risk.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Risk.dir\objects1.rsp @<<
 /out:Risk.exe /implib:Risk.lib /pdb:C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug\Risk.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Risk.dir\build: Risk.exe

.PHONY : CMakeFiles\Risk.dir\build

CMakeFiles\Risk.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Risk.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Risk.dir\clean

CMakeFiles\Risk.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Flatline\Documents\Projects\Risk C:\Users\Flatline\Documents\Projects\Risk C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug C:\Users\Flatline\Documents\Projects\Risk\cmake-build-debug\CMakeFiles\Risk.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Risk.dir\depend

