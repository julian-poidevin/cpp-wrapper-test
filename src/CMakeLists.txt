# CMakeLists.txt for src/

# Include the directories containing header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libapi)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libapi_wrapper)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/myapi)

# Add subdirectories
add_subdirectory(libapi)
add_subdirectory(libapi_wrapper)
add_subdirectory(myapi)
