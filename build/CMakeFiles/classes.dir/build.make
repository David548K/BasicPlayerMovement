# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build"

# Include any dependencies generated for this target.
include CMakeFiles/classes.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/classes.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/classes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/classes.dir/flags.make

CMakeFiles/classes.dir/src/classes.cpp.obj: CMakeFiles/classes.dir/flags.make
CMakeFiles/classes.dir/src/classes.cpp.obj: CMakeFiles/classes.dir/includes_CXX.rsp
CMakeFiles/classes.dir/src/classes.cpp.obj: C:/Users/Angel/Desktop/Proyectos/Proyectos\ C++/BasicPlayerMovement/src/classes.cpp
CMakeFiles/classes.dir/src/classes.cpp.obj: CMakeFiles/classes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/classes.dir/src/classes.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/classes.dir/src/classes.cpp.obj -MF CMakeFiles\classes.dir\src\classes.cpp.obj.d -o CMakeFiles\classes.dir\src\classes.cpp.obj -c "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\src\classes.cpp"

CMakeFiles/classes.dir/src/classes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/classes.dir/src/classes.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\src\classes.cpp" > CMakeFiles\classes.dir\src\classes.cpp.i

CMakeFiles/classes.dir/src/classes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/classes.dir/src/classes.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\src\classes.cpp" -o CMakeFiles\classes.dir\src\classes.cpp.s

# Object files for target classes
classes_OBJECTS = \
"CMakeFiles/classes.dir/src/classes.cpp.obj"

# External object files for target classes
classes_EXTERNAL_OBJECTS =

libclasses.a: CMakeFiles/classes.dir/src/classes.cpp.obj
libclasses.a: CMakeFiles/classes.dir/build.make
libclasses.a: CMakeFiles/classes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libclasses.a"
	$(CMAKE_COMMAND) -P CMakeFiles\classes.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\classes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/classes.dir/build: libclasses.a
.PHONY : CMakeFiles/classes.dir/build

CMakeFiles/classes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\classes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/classes.dir/clean

CMakeFiles/classes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement" "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement" "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build" "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build" "C:\Users\Angel\Desktop\Proyectos\Proyectos C++\BasicPlayerMovement\build\CMakeFiles\classes.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/classes.dir/depend

