# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/ros/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ros/catkin_ws/build

# Include any dependencies generated for this target.
include ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/depend.make

# Include the progress variables for this target.
include ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/progress.make

# Include the compile flags for this target's objects.
include ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/flags.make

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/flags.make
ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o: /home/ros/catkin_ws/src/ork/src/ork_renderer/src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o"
	cd /home/ros/catkin_ws/build/ork/src/ork_renderer/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/view_generator.dir/main.cpp.o -c /home/ros/catkin_ws/src/ork/src/ork_renderer/src/main.cpp

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/view_generator.dir/main.cpp.i"
	cd /home/ros/catkin_ws/build/ork/src/ork_renderer/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ros/catkin_ws/src/ork/src/ork_renderer/src/main.cpp > CMakeFiles/view_generator.dir/main.cpp.i

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/view_generator.dir/main.cpp.s"
	cd /home/ros/catkin_ws/build/ork/src/ork_renderer/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ros/catkin_ws/src/ork/src/ork_renderer/src/main.cpp -o CMakeFiles/view_generator.dir/main.cpp.s

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.requires:
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.requires

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.provides: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.requires
	$(MAKE) -f ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/build.make ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.provides.build
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.provides

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.provides.build: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o

# Object files for target view_generator
view_generator_OBJECTS = \
"CMakeFiles/view_generator.dir/main.cpp.o"

# External object files for target view_generator
view_generator_EXTERNAL_OBJECTS =

/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/build.make
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libGL.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libSM.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libICE.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libX11.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXext.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libglut.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXmu.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXi.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /home/ros/catkin_ws/devel/lib/libobject_recognition_renderer_3d.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /home/ros/catkin_ws/devel/lib/libobject_recognition_renderer_2d.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libGL.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libSM.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libICE.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libX11.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXext.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libglut.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXmu.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libXi.so
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator"
	cd /home/ros/catkin_ws/build/ork/src/ork_renderer/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/view_generator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/build: /home/ros/catkin_ws/devel/lib/object_recognition_renderer/view_generator
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/build

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/requires: ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/main.cpp.o.requires
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/requires

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/clean:
	cd /home/ros/catkin_ws/build/ork/src/ork_renderer/src && $(CMAKE_COMMAND) -P CMakeFiles/view_generator.dir/cmake_clean.cmake
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/clean

ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/depend:
	cd /home/ros/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ros/catkin_ws/src /home/ros/catkin_ws/src/ork/src/ork_renderer/src /home/ros/catkin_ws/build /home/ros/catkin_ws/build/ork/src/ork_renderer/src /home/ros/catkin_ws/build/ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ork/src/ork_renderer/src/CMakeFiles/view_generator.dir/depend

