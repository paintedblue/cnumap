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

# Include any dependencies generated for this target.
include test/CMakeFiles/vector2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/vector2.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/vector2.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/vector2.dir/flags.make

test/CMakeFiles/vector2.dir/codegen:
.PHONY : test/CMakeFiles/vector2.dir/codegen

test/CMakeFiles/vector2.dir/vector2.cc.o: test/CMakeFiles/vector2.dir/flags.make
test/CMakeFiles/vector2.dir/vector2.cc.o: /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/vector2.cc
test/CMakeFiles/vector2.dir/vector2.cc.o: test/CMakeFiles/vector2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/vector2.dir/vector2.cc.o"
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -Werror -MD -MT test/CMakeFiles/vector2.dir/vector2.cc.o -MF CMakeFiles/vector2.dir/vector2.cc.o.d -o CMakeFiles/vector2.dir/vector2.cc.o -c /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/vector2.cc

test/CMakeFiles/vector2.dir/vector2.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vector2.dir/vector2.cc.i"
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -Werror -E /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/vector2.cc > CMakeFiles/vector2.dir/vector2.cc.i

test/CMakeFiles/vector2.dir/vector2.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vector2.dir/vector2.cc.s"
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wall -Werror -S /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test/vector2.cc -o CMakeFiles/vector2.dir/vector2.cc.s

# Object files for target vector2
vector2_OBJECTS = \
"CMakeFiles/vector2.dir/vector2.cc.o"

# External object files for target vector2
vector2_EXTERNAL_OBJECTS =

test/vector2: test/CMakeFiles/vector2.dir/vector2.cc.o
test/vector2: test/CMakeFiles/vector2.dir/build.make
test/vector2: test/libvalhalla_test.a
test/vector2: src/libvalhalla.a
test/vector2: /opt/homebrew/lib/libprotobuf-lite.29.1.0.dylib
test/vector2: /usr/local/lib/libabsl_log_internal_check_op.a
test/vector2: /usr/local/lib/libabsl_leak_check.a
test/vector2: /usr/local/lib/libabsl_die_if_null.a
test/vector2: /usr/local/lib/libabsl_log_internal_conditions.a
test/vector2: /usr/local/lib/libabsl_log_internal_message.a
test/vector2: /usr/local/lib/libabsl_log_internal_nullguard.a
test/vector2: /usr/local/lib/libabsl_examine_stack.a
test/vector2: /usr/local/lib/libabsl_log_internal_format.a
test/vector2: /usr/local/lib/libabsl_log_internal_proto.a
test/vector2: /usr/local/lib/libabsl_log_internal_log_sink_set.a
test/vector2: /usr/local/lib/libabsl_log_sink.a
test/vector2: /usr/local/lib/libabsl_log_entry.a
test/vector2: /usr/local/lib/libabsl_flags_internal.a
test/vector2: /usr/local/lib/libabsl_flags_marshalling.a
test/vector2: /usr/local/lib/libabsl_flags_reflection.a
test/vector2: /usr/local/lib/libabsl_flags_config.a
test/vector2: /usr/local/lib/libabsl_flags_program_name.a
test/vector2: /usr/local/lib/libabsl_flags_private_handle_accessor.a
test/vector2: /usr/local/lib/libabsl_flags_commandlineflag.a
test/vector2: /usr/local/lib/libabsl_flags_commandlineflag_internal.a
test/vector2: /usr/local/lib/libabsl_log_initialize.a
test/vector2: /usr/local/lib/libabsl_log_internal_globals.a
test/vector2: /usr/local/lib/libabsl_log_globals.a
test/vector2: /usr/local/lib/libabsl_vlog_config_internal.a
test/vector2: /usr/local/lib/libabsl_log_internal_fnmatch.a
test/vector2: /usr/local/lib/libabsl_raw_hash_set.a
test/vector2: /usr/local/lib/libabsl_hash.a
test/vector2: /usr/local/lib/libabsl_city.a
test/vector2: /usr/local/lib/libabsl_low_level_hash.a
test/vector2: /usr/local/lib/libabsl_hashtablez_sampler.a
test/vector2: /usr/local/lib/libabsl_random_distributions.a
test/vector2: /usr/local/lib/libabsl_random_seed_sequences.a
test/vector2: /usr/local/lib/libabsl_random_internal_pool_urbg.a
test/vector2: /usr/local/lib/libabsl_random_internal_randen.a
test/vector2: /usr/local/lib/libabsl_random_internal_randen_hwaes.a
test/vector2: /usr/local/lib/libabsl_random_internal_randen_hwaes_impl.a
test/vector2: /usr/local/lib/libabsl_random_internal_randen_slow.a
test/vector2: /usr/local/lib/libabsl_random_internal_platform.a
test/vector2: /usr/local/lib/libabsl_random_internal_seed_material.a
test/vector2: /usr/local/lib/libabsl_random_seed_gen_exception.a
test/vector2: /usr/local/lib/libabsl_statusor.a
test/vector2: /usr/local/lib/libabsl_status.a
test/vector2: /usr/local/lib/libabsl_cord.a
test/vector2: /usr/local/lib/libabsl_cordz_info.a
test/vector2: /usr/local/lib/libabsl_cord_internal.a
test/vector2: /usr/local/lib/libabsl_cordz_functions.a
test/vector2: /usr/local/lib/libabsl_exponential_biased.a
test/vector2: /usr/local/lib/libabsl_cordz_handle.a
test/vector2: /usr/local/lib/libabsl_crc_cord_state.a
test/vector2: /usr/local/lib/libabsl_crc32c.a
test/vector2: /usr/local/lib/libabsl_crc_internal.a
test/vector2: /usr/local/lib/libabsl_crc_cpu_detect.a
test/vector2: /usr/local/lib/libabsl_bad_optional_access.a
test/vector2: /usr/local/lib/libabsl_strerror.a
test/vector2: /usr/local/lib/libabsl_str_format_internal.a
test/vector2: /usr/local/lib/libabsl_synchronization.a
test/vector2: /usr/local/lib/libabsl_stacktrace.a
test/vector2: /usr/local/lib/libabsl_symbolize.a
test/vector2: /usr/local/lib/libabsl_debugging_internal.a
test/vector2: /usr/local/lib/libabsl_demangle_internal.a
test/vector2: /usr/local/lib/libabsl_demangle_rust.a
test/vector2: /usr/local/lib/libabsl_decode_rust_punycode.a
test/vector2: /usr/local/lib/libabsl_utf8_for_code_point.a
test/vector2: /usr/local/lib/libabsl_graphcycles_internal.a
test/vector2: /usr/local/lib/libabsl_kernel_timeout_internal.a
test/vector2: /usr/local/lib/libabsl_malloc_internal.a
test/vector2: /usr/local/lib/libabsl_time.a
test/vector2: /usr/local/lib/libabsl_civil_time.a
test/vector2: /usr/local/lib/libabsl_time_zone.a
test/vector2: /usr/local/lib/libabsl_bad_variant_access.a
test/vector2: /usr/local/lib/libabsl_strings.a
test/vector2: /usr/local/lib/libabsl_int128.a
test/vector2: /usr/local/lib/libabsl_strings_internal.a
test/vector2: /usr/local/lib/libabsl_string_view.a
test/vector2: /usr/local/lib/libabsl_base.a
test/vector2: /usr/local/lib/libabsl_spinlock_wait.a
test/vector2: /usr/local/lib/libabsl_throw_delegate.a
test/vector2: /usr/local/lib/libabsl_raw_logging_internal.a
test/vector2: /usr/local/lib/libabsl_log_severity.a
test/vector2: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/usr/lib/libcurl.tbd
test/vector2: /usr/local/lib/libprime_server.dylib
test/vector2: /opt/homebrew/Cellar/zeromq/4.3.5_1/lib/libzmq.dylib
test/vector2: /opt/homebrew/Cellar/libspatialite/5.1.0_1/lib/libspatialite.dylib
test/vector2: /opt/homebrew/lib/libminizip.dylib
test/vector2: /opt/homebrew/lib/librttopo.dylib
test/vector2: /opt/homebrew/lib/libfreexl.dylib
test/vector2: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/usr/lib/libiconv.tbd
test/vector2: /opt/homebrew/lib/libproj.dylib
test/vector2: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/usr/lib/libz.tbd
test/vector2: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/usr/lib/libxml2.tbd
test/vector2: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/usr/lib/libm.tbd
test/vector2: /opt/homebrew/opt/sqlite/lib/libsqlite3.dylib
test/vector2: /opt/homebrew/Cellar/luajit/2.1.1732813678/lib/libluajit-5.1.dylib
test/vector2: lib/libgtest_main.a
test/vector2: lib/libgmock.a
test/vector2: lib/libgtest.a
test/vector2: /opt/homebrew/opt/lz4/lib/liblz4.dylib
test/vector2: /opt/homebrew/Cellar/geos/3.13.0/lib/libgeos_c.dylib
test/vector2: test/CMakeFiles/vector2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector2"
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/vector2.dir/build: test/vector2
.PHONY : test/CMakeFiles/vector2.dir/build

test/CMakeFiles/vector2.dir/clean:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test && $(CMAKE_COMMAND) -P CMakeFiles/vector2.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/vector2.dir/clean

test/CMakeFiles/vector2.dir/depend:
	cd /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yijungu/cnumap/backend/valhalla_server/valhalla /Users/yijungu/cnumap/backend/valhalla_server/valhalla/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test /Users/yijungu/cnumap/backend/valhalla_server/valhalla/build/test/CMakeFiles/vector2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/vector2.dir/depend
