# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = C:\Users\dumpl\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\dumpl\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/J.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/J.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/J.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/J.dir/flags.make

CMakeFiles/J.dir/J.cpp.obj: CMakeFiles/J.dir/flags.make
CMakeFiles/J.dir/J.cpp.obj: C:/Programming/C++/Yandex_Algorithms/Algorithms_1.0/Lesson_2/J.cpp
CMakeFiles/J.dir/J.cpp.obj: CMakeFiles/J.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/J.dir/J.cpp.obj"
	C:\Users\dumpl\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/J.dir/J.cpp.obj -MF CMakeFiles\J.dir\J.cpp.obj.d -o CMakeFiles\J.dir\J.cpp.obj -c C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\J.cpp

CMakeFiles/J.dir/J.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/J.dir/J.cpp.i"
	C:\Users\dumpl\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\J.cpp > CMakeFiles\J.dir\J.cpp.i

CMakeFiles/J.dir/J.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/J.dir/J.cpp.s"
	C:\Users\dumpl\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\J.cpp -o CMakeFiles\J.dir\J.cpp.s

# Object files for target J
J_OBJECTS = \
"CMakeFiles/J.dir/J.cpp.obj"

# External object files for target J
J_EXTERNAL_OBJECTS =

J.exe: CMakeFiles/J.dir/J.cpp.obj
J.exe: CMakeFiles/J.dir/build.make
J.exe: CMakeFiles/J.dir/linkLibs.rsp
J.exe: CMakeFiles/J.dir/objects1.rsp
J.exe: CMakeFiles/J.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable J.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\J.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/J.dir/build: J.exe
.PHONY : CMakeFiles/J.dir/build

CMakeFiles/J.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\J.dir\cmake_clean.cmake
.PHONY : CMakeFiles/J.dir/clean

CMakeFiles/J.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2 C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2 C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug C:\Programming\C++\Yandex_Algorithms\Algorithms_1.0\Lesson_2\cmake-build-debug\CMakeFiles\J.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/J.dir/depend

