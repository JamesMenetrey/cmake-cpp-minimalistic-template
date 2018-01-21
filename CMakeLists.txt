# Distributed under the MIT License (See accompanying file /LICENSE )

# CMake build : global project (kind of solution)

# At LEAST 3.9 but newer is better
cmake_minimum_required(VERSION 3.9)

# Assign a name to the global project
project(cmake_cpp_template)

# Set the version of C/C++ (here C++17)
set(CMAKE_CXX_STANDARD 17)

# Include external dependencies, located in the folder lib (imported as a git submodule)
add_subdirectory(lib/googletest/googletest)

# Indicate that the library vector uses the header files within the folder include.
add_subdirectory(vectorLib)
add_subdirectory(app)