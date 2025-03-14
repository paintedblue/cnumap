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

# Utility rule file for roma_tiles.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/roma_tiles.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/roma_tiles.dir/progress.make

test/CMakeFiles/roma_tiles: test/data/roma_tiles/1/047/352.gph

test/data/roma_tiles/1/047/352.gph: valhalla_build_tiles
test/data/roma_tiles/1/047/352.gph: valhalla_add_predicted_traffic
test/data/roma_tiles/1/047/352.gph: /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/data/via_montebello_roma_italy.osm.pbf
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Roma Tiles..."
	/opt/homebrew/bin/cmake -E make_directory test/data/roma_tiles/
	/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/valhalla_build_tiles --inline-config '{"mjolnir":{"id_table_size":1000,"tile_dir":"test/data/roma_tiles","timezone":"test/data/tz.sqlite","hierarchy":true,"shortcuts":true,"concurrency":1,"logging":{"type":""}}}' /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/data/via_montebello_roma_italy.osm.pbf

test/CMakeFiles/roma_tiles.dir/codegen:
.PHONY : test/CMakeFiles/roma_tiles.dir/codegen

roma_tiles: test/CMakeFiles/roma_tiles
roma_tiles: test/data/roma_tiles/1/047/352.gph
roma_tiles: test/CMakeFiles/roma_tiles.dir/build.make
.PHONY : roma_tiles

# Rule to build all files generated by this target.
test/CMakeFiles/roma_tiles.dir/build: roma_tiles
.PHONY : test/CMakeFiles/roma_tiles.dir/build

test/CMakeFiles/roma_tiles.dir/clean:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && $(CMAKE_COMMAND) -P CMakeFiles/roma_tiles.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/roma_tiles.dir/clean

test/CMakeFiles/roma_tiles.dir/depend:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yijungu/cnumap/backend/valhalla_server/valhalla /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/CMakeFiles/roma_tiles.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/roma_tiles.dir/depend

