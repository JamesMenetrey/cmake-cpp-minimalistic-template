# Assign a name to the subproject that tests the library
project(app_test)

# Include the library Google Test
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Load all the source file within the folder src
file(GLOB SOURCE_FILES src/*.cpp)

# Define the executable for running the test !
add_executable(app_test ${SOURCE_FILES})

# Indicate that the library of test uses the header files and the main function of the Google test.
target_link_libraries(app_test app gtest gtest_main)