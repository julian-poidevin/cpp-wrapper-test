# CMakeLists.txt for src/libapi_wrapper

# Define the library
add_library(libapi_wrapper SHARED libapi_wrapper.cpp libapi_wrapper.h)

# Link with libapi
target_link_libraries(libapi_wrapper PRIVATE libapi)
