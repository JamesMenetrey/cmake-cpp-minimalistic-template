# Assign a name to this project
project(vector)

# Load all the source file within the folder src
file(GLOB SOURCE_FILES src/*.cpp)

# Define the library itself !
# Indicate this library will be statically bound
add_library(vector STATIC ${SOURCE_FILES})

# Indicate that the library vector uses the header files within the folder include.
# Using target_include_directories instead of include_directories enables CMake to
# transitively make available the header files in the projects that depend on this library.
target_include_directories(vector PUBLIC include)

# Include the test folder
add_subdirectory(test)