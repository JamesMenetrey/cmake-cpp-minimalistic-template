# Assign a name to the project
project(app)

# Load all the source file within the folder src
file(GLOB SOURCE_FILES src/*.cpp)

# Define the executable of the application !
add_executable(app ${SOURCE_FILES})

# Indicate that the app uses the header files within the folder include.
# Using target_include_directories instead of include_directories enables CMake to
# transitively make available the header files in the projects that depend on this library.
target_include_directories(app PUBLIC include)

# Indicate that the application depends on the library vector
target_link_libraries(app vector)