# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yzq0207/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yzq0207/catkin_ws/build

# Include any dependencies generated for this target.
include robot_voice/CMakeFiles/iat_publish.dir/depend.make

# Include the progress variables for this target.
include robot_voice/CMakeFiles/iat_publish.dir/progress.make

# Include the compile flags for this target's objects.
include robot_voice/CMakeFiles/iat_publish.dir/flags.make

robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o: robot_voice/CMakeFiles/iat_publish.dir/flags.make
robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o: /home/yzq0207/catkin_ws/src/robot_voice/src/iat_publish.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yzq0207/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o -c /home/yzq0207/catkin_ws/src/robot_voice/src/iat_publish.cpp

robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iat_publish.dir/src/iat_publish.cpp.i"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yzq0207/catkin_ws/src/robot_voice/src/iat_publish.cpp > CMakeFiles/iat_publish.dir/src/iat_publish.cpp.i

robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iat_publish.dir/src/iat_publish.cpp.s"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yzq0207/catkin_ws/src/robot_voice/src/iat_publish.cpp -o CMakeFiles/iat_publish.dir/src/iat_publish.cpp.s

robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o: robot_voice/CMakeFiles/iat_publish.dir/flags.make
robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o: /home/yzq0207/catkin_ws/src/robot_voice/src/speech_recognizer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yzq0207/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o   -c /home/yzq0207/catkin_ws/src/robot_voice/src/speech_recognizer.c

robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/iat_publish.dir/src/speech_recognizer.c.i"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yzq0207/catkin_ws/src/robot_voice/src/speech_recognizer.c > CMakeFiles/iat_publish.dir/src/speech_recognizer.c.i

robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/iat_publish.dir/src/speech_recognizer.c.s"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yzq0207/catkin_ws/src/robot_voice/src/speech_recognizer.c -o CMakeFiles/iat_publish.dir/src/speech_recognizer.c.s

robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.o: robot_voice/CMakeFiles/iat_publish.dir/flags.make
robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.o: /home/yzq0207/catkin_ws/src/robot_voice/src/linuxrec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yzq0207/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.o"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/iat_publish.dir/src/linuxrec.c.o   -c /home/yzq0207/catkin_ws/src/robot_voice/src/linuxrec.c

robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/iat_publish.dir/src/linuxrec.c.i"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yzq0207/catkin_ws/src/robot_voice/src/linuxrec.c > CMakeFiles/iat_publish.dir/src/linuxrec.c.i

robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/iat_publish.dir/src/linuxrec.c.s"
	cd /home/yzq0207/catkin_ws/build/robot_voice && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yzq0207/catkin_ws/src/robot_voice/src/linuxrec.c -o CMakeFiles/iat_publish.dir/src/linuxrec.c.s

# Object files for target iat_publish
iat_publish_OBJECTS = \
"CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o" \
"CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o" \
"CMakeFiles/iat_publish.dir/src/linuxrec.c.o"

# External object files for target iat_publish
iat_publish_EXTERNAL_OBJECTS =

/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: robot_voice/CMakeFiles/iat_publish.dir/src/iat_publish.cpp.o
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: robot_voice/CMakeFiles/iat_publish.dir/src/speech_recognizer.c.o
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: robot_voice/CMakeFiles/iat_publish.dir/src/linuxrec.c.o
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: robot_voice/CMakeFiles/iat_publish.dir/build.make
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/libroscpp.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/librosconsole.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/librostime.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /opt/ros/noetic/lib/libcpp_common.so
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish: robot_voice/CMakeFiles/iat_publish.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yzq0207/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable /home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish"
	cd /home/yzq0207/catkin_ws/build/robot_voice && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iat_publish.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
robot_voice/CMakeFiles/iat_publish.dir/build: /home/yzq0207/catkin_ws/devel/lib/robot_voice/iat_publish

.PHONY : robot_voice/CMakeFiles/iat_publish.dir/build

robot_voice/CMakeFiles/iat_publish.dir/clean:
	cd /home/yzq0207/catkin_ws/build/robot_voice && $(CMAKE_COMMAND) -P CMakeFiles/iat_publish.dir/cmake_clean.cmake
.PHONY : robot_voice/CMakeFiles/iat_publish.dir/clean

robot_voice/CMakeFiles/iat_publish.dir/depend:
	cd /home/yzq0207/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yzq0207/catkin_ws/src /home/yzq0207/catkin_ws/src/robot_voice /home/yzq0207/catkin_ws/build /home/yzq0207/catkin_ws/build/robot_voice /home/yzq0207/catkin_ws/build/robot_voice/CMakeFiles/iat_publish.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : robot_voice/CMakeFiles/iat_publish.dir/depend

