# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(LibraryCatalogProject VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable and source files
add_executable(LibraryCatalog 
    src/main.cpp 
    src/Book.cpp 
    src/library_catalog.cpp
)

# Include directories
target_include_directories(LibraryCatalog PUBLIC "${PROJECT_SOURCE_DIR}/include")

# Set output directory for the executable
set_target_properties(LibraryCatalog PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/output"
)
