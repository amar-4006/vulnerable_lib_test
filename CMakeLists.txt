cmake_minimum_required(VERSION 3.10)
project(VulnerableLibTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages (vcpkg will handle this automatically)
find_package(LibXml2 CONFIG REQUIRED)
find_package(CURL CONFIG REQUIRED)

# Create executable
add_executable(libtest main.cpp)

# Link libraries using modern CMake targets
target_link_libraries(libtest 
    PRIVATE 
    LibXml2::LibXml2
    CURL::libcurl
)

# Compiler flags
target_compile_options(libtest PRIVATE -Wall -Wextra)

# Debug information
get_target_property(LIBXML2_VERSION LibXml2::LibXml2 VERSION)
get_target_property(CURL_VERSION CURL::libcurl VERSION)

message(STATUS "LibXml2 target found")
message(STATUS "CURL target found")
