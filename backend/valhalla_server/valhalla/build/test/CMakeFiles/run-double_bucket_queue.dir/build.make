# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yijungu/cnumap/backend/valhalla_server/valhalla

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build

# Utility rule file for run-double_bucket_queue.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/run-double_bucket_queue.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/run-double_bucket_queue.dir/progress.make

test/CMakeFiles/run-double_bucket_queue: test/double_bucket_queue.log

test/double_bucket_queue.log: test/double_bucket_queue
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating double_bucket_queue.log"
	LOCPATH=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/locales /bin/bash -c "/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/double_bucket_queue >& /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/double_bucket_queue.log       && echo [PASS] double_bucket_queue       || ( exit=\$$? ;            echo [FAIL] double_bucket_queue ;            cat /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/double_bucket_queue.log ;            exit \$$exit )"

test/CMakeFiles/run-double_bucket_queue.dir/codegen:
.PHONY : test/CMakeFiles/run-double_bucket_queue.dir/codegen

run-double_bucket_queue: test/CMakeFiles/run-double_bucket_queue
run-double_bucket_queue: test/double_bucket_queue.log
run-double_bucket_queue: test/CMakeFiles/run-double_bucket_queue.dir/build.make
.PHONY : run-double_bucket_queue

# Rule to build all files generated by this target.
test/CMakeFiles/run-double_bucket_queue.dir/build: run-double_bucket_queue
.PHONY : test/CMakeFiles/run-double_bucket_queue.dir/build

test/CMakeFiles/run-double_bucket_queue.dir/clean:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && $(CMAKE_COMMAND) -P CMakeFiles/run-double_bucket_queue.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/run-double_bucket_queue.dir/clean

test/CMakeFiles/run-double_bucket_queue.dir/depend:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yijungu/cnumap/backend/valhalla_server/valhalla /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/CMakeFiles/run-double_bucket_queue.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/run-double_bucket_queue.dir/depend
