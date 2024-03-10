# CMakeLists.txt for src/myapi

# Define the library
add_library(myapi SHARED myapi.c myapi.h)

# Link with libapi_wrapper
target_link_libraries(myapi PRIVATE libapi_wrapper)
