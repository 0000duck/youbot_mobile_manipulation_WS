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

# Utility rule file for object_tracker_srv_definitions_generate_messages_cpp.

# Include the progress variables for this target.
include v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/progress.make

v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h
v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h
v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h
v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h
v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h

/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h: /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h: /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/cleanup.srv
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h: /opt/ros/indigo/share/gencpp/cmake/../msg.h.template
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h: /opt/ros/indigo/share/gencpp/cmake/../srv.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from object_tracker_srv_definitions/cleanup.srv"
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/cleanup.srv -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -p object_tracker_srv_definitions -o /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions -e /opt/ros/indigo/share/gencpp/cmake/..

/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h: /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h: /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/detect_and_track.srv
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h: /opt/ros/indigo/share/gencpp/cmake/../msg.h.template
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h: /opt/ros/indigo/share/gencpp/cmake/../srv.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from object_tracker_srv_definitions/detect_and_track.srv"
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/detect_and_track.srv -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -p object_tracker_srv_definitions -o /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions -e /opt/ros/indigo/share/gencpp/cmake/..

/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h: /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h: /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/change_tracking_model.srv
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h: /opt/ros/indigo/share/gencpp/cmake/../msg.h.template
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h: /opt/ros/indigo/share/gencpp/cmake/../srv.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from object_tracker_srv_definitions/change_tracking_model.srv"
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/change_tracking_model.srv -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -p object_tracker_srv_definitions -o /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions -e /opt/ros/indigo/share/gencpp/cmake/..

/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h: /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/stop_tracker.srv
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../msg.h.template
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../srv.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from object_tracker_srv_definitions/stop_tracker.srv"
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/stop_tracker.srv -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -p object_tracker_srv_definitions -o /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions -e /opt/ros/indigo/share/gencpp/cmake/..

/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h: /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/start_tracker.srv
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../msg.h.template
/home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h: /opt/ros/indigo/share/gencpp/cmake/../srv.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ros/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from object_tracker_srv_definitions/start_tracker.srv"
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && ../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions/srv/start_tracker.srv -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -p object_tracker_srv_definitions -o /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions -e /opt/ros/indigo/share/gencpp/cmake/..

object_tracker_srv_definitions_generate_messages_cpp: v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp
object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/cleanup.h
object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/detect_and_track.h
object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/change_tracking_model.h
object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/stop_tracker.h
object_tracker_srv_definitions_generate_messages_cpp: /home/ros/catkin_ws/devel/include/object_tracker_srv_definitions/start_tracker.h
object_tracker_srv_definitions_generate_messages_cpp: v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/build.make
.PHONY : object_tracker_srv_definitions_generate_messages_cpp

# Rule to build all files generated by this target.
v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/build: object_tracker_srv_definitions_generate_messages_cpp
.PHONY : v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/build

v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/clean:
	cd /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions && $(CMAKE_COMMAND) -P CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/cmake_clean.cmake
.PHONY : v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/clean

v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/depend:
	cd /home/ros/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ros/catkin_ws/src /home/ros/catkin_ws/src/v4r_ros_wrappers/object_tracker_srv_definitions /home/ros/catkin_ws/build /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions /home/ros/catkin_ws/build/v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : v4r_ros_wrappers/object_tracker_srv_definitions/CMakeFiles/object_tracker_srv_definitions_generate_messages_cpp.dir/depend

