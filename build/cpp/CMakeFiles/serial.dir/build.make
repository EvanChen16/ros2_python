# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/iclab/motion/src/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iclab/motion/build/cpp

# Include any dependencies generated for this target.
include CMakeFiles/serial.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/serial.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/serial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/serial.dir/flags.make

CMakeFiles/serial.dir/src/serial.cpp.o: CMakeFiles/serial.dir/flags.make
CMakeFiles/serial.dir/src/serial.cpp.o: /home/iclab/motion/src/cpp/src/serial.cpp
CMakeFiles/serial.dir/src/serial.cpp.o: CMakeFiles/serial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iclab/motion/build/cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/serial.dir/src/serial.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serial.dir/src/serial.cpp.o -MF CMakeFiles/serial.dir/src/serial.cpp.o.d -o CMakeFiles/serial.dir/src/serial.cpp.o -c /home/iclab/motion/src/cpp/src/serial.cpp

CMakeFiles/serial.dir/src/serial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serial.dir/src/serial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iclab/motion/src/cpp/src/serial.cpp > CMakeFiles/serial.dir/src/serial.cpp.i

CMakeFiles/serial.dir/src/serial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serial.dir/src/serial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iclab/motion/src/cpp/src/serial.cpp -o CMakeFiles/serial.dir/src/serial.cpp.s

CMakeFiles/serial.dir/cssl/cssl.c.o: CMakeFiles/serial.dir/flags.make
CMakeFiles/serial.dir/cssl/cssl.c.o: /home/iclab/motion/src/cpp/cssl/cssl.c
CMakeFiles/serial.dir/cssl/cssl.c.o: CMakeFiles/serial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iclab/motion/build/cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/serial.dir/cssl/cssl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/serial.dir/cssl/cssl.c.o -MF CMakeFiles/serial.dir/cssl/cssl.c.o.d -o CMakeFiles/serial.dir/cssl/cssl.c.o -c /home/iclab/motion/src/cpp/cssl/cssl.c

CMakeFiles/serial.dir/cssl/cssl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/serial.dir/cssl/cssl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/iclab/motion/src/cpp/cssl/cssl.c > CMakeFiles/serial.dir/cssl/cssl.c.i

CMakeFiles/serial.dir/cssl/cssl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/serial.dir/cssl/cssl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/iclab/motion/src/cpp/cssl/cssl.c -o CMakeFiles/serial.dir/cssl/cssl.c.s

# Object files for target serial
serial_OBJECTS = \
"CMakeFiles/serial.dir/src/serial.cpp.o" \
"CMakeFiles/serial.dir/cssl/cssl.c.o"

# External object files for target serial
serial_EXTERNAL_OBJECTS =

serial: CMakeFiles/serial.dir/src/serial.cpp.o
serial: CMakeFiles/serial.dir/cssl/cssl.c.o
serial: CMakeFiles/serial.dir/build.make
serial: CMakeFiles/serial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iclab/motion/build/cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable serial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/serial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/serial.dir/build: serial
.PHONY : CMakeFiles/serial.dir/build

CMakeFiles/serial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/serial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/serial.dir/clean

CMakeFiles/serial.dir/depend:
	cd /home/iclab/motion/build/cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iclab/motion/src/cpp /home/iclab/motion/src/cpp /home/iclab/motion/build/cpp /home/iclab/motion/build/cpp /home/iclab/motion/build/cpp/CMakeFiles/serial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/serial.dir/depend

