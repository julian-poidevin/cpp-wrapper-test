# CMakeLists.txt for examples

# Include directories containing header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src/myapi)

# Build the myapp executable
add_executable(myapp myapp.c)

# Link with myapi
target_link_libraries(myapp PRIVATE myapi)
