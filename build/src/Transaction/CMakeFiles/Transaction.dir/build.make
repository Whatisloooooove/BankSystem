# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /snap/cmake/1384/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1384/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build"

# Include any dependencies generated for this target.
include src/Transaction/CMakeFiles/Transaction.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Transaction/CMakeFiles/Transaction.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Transaction/CMakeFiles/Transaction.dir/progress.make

# Include the compile flags for this target's objects.
include src/Transaction/CMakeFiles/Transaction.dir/flags.make

src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/flags.make
src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o: /home/whatislove/Рабочий\ стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/Transaction.cpp
src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o -MF CMakeFiles/Transaction.dir/Transaction.cpp.o.d -o CMakeFiles/Transaction.dir/Transaction.cpp.o -c "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/Transaction.cpp"

src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Transaction.dir/Transaction.cpp.i"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/Transaction.cpp" > CMakeFiles/Transaction.dir/Transaction.cpp.i

src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Transaction.dir/Transaction.cpp.s"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/Transaction.cpp" -o CMakeFiles/Transaction.dir/Transaction.cpp.s

src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/flags.make
src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o: /home/whatislove/Рабочий\ стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/WithdrawTransaction.cpp
src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o -MF CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o.d -o CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o -c "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/WithdrawTransaction.cpp"

src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.i"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/WithdrawTransaction.cpp" > CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.i

src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.s"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/WithdrawTransaction.cpp" -o CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.s

src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/flags.make
src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o: /home/whatislove/Рабочий\ стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/DepositTransaction.cpp
src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o -MF CMakeFiles/Transaction.dir/DepositTransaction.cpp.o.d -o CMakeFiles/Transaction.dir/DepositTransaction.cpp.o -c "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/DepositTransaction.cpp"

src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Transaction.dir/DepositTransaction.cpp.i"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/DepositTransaction.cpp" > CMakeFiles/Transaction.dir/DepositTransaction.cpp.i

src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Transaction.dir/DepositTransaction.cpp.s"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/DepositTransaction.cpp" -o CMakeFiles/Transaction.dir/DepositTransaction.cpp.s

src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/flags.make
src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o: /home/whatislove/Рабочий\ стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/TransactionInvoker.cpp
src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o: src/Transaction/CMakeFiles/Transaction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o -MF CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o.d -o CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o -c "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/TransactionInvoker.cpp"

src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Transaction.dir/TransactionInvoker.cpp.i"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/TransactionInvoker.cpp" > CMakeFiles/Transaction.dir/TransactionInvoker.cpp.i

src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Transaction.dir/TransactionInvoker.cpp.s"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction/TransactionInvoker.cpp" -o CMakeFiles/Transaction.dir/TransactionInvoker.cpp.s

# Object files for target Transaction
Transaction_OBJECTS = \
"CMakeFiles/Transaction.dir/Transaction.cpp.o" \
"CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o" \
"CMakeFiles/Transaction.dir/DepositTransaction.cpp.o" \
"CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o"

# External object files for target Transaction
Transaction_EXTERNAL_OBJECTS =

src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/Transaction.cpp.o
src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/WithdrawTransaction.cpp.o
src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/DepositTransaction.cpp.o
src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/TransactionInvoker.cpp.o
src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/build.make
src/Transaction/libTransaction.a: src/Transaction/CMakeFiles/Transaction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libTransaction.a"
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && $(CMAKE_COMMAND) -P CMakeFiles/Transaction.dir/cmake_clean_target.cmake
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Transaction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Transaction/CMakeFiles/Transaction.dir/build: src/Transaction/libTransaction.a
.PHONY : src/Transaction/CMakeFiles/Transaction.dir/build

src/Transaction/CMakeFiles/Transaction.dir/clean:
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" && $(CMAKE_COMMAND) -P CMakeFiles/Transaction.dir/cmake_clean.cmake
.PHONY : src/Transaction/CMakeFiles/Transaction.dir/clean

src/Transaction/CMakeFiles/Transaction.dir/depend:
	cd "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024" "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/src/Transaction" "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build" "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction" "/home/whatislove/Рабочий стол/PROgramming/TP/Project/banksystemtp2024/build/src/Transaction/CMakeFiles/Transaction.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : src/Transaction/CMakeFiles/Transaction.dir/depend

