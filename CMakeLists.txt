project(antlr_cxx_demo CXX)

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 17
set(CMAKE_CXX_STANDARD 17)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
# set(ANTLR4_WITH_STATIC_CRT OFF)

# Specify the version of the antlr4 library needed for this project.
# By default the latest version of antlr4 will be used.  You can specify a
# specific, stable version by setting a repository tag value or a link
# to a zip file containing the library source.
set(ANTLR4_TAG 4.11.1)
# set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.11.1.zip)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# Add PIC for antlr static library.
set_property(TARGET antlr4_static PROPERTY POSITION_INDEPENDENT_CODE ON)

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
# set(ANTLR_EXECUTABLE antlr4)
if(NOT DEFINED ANTLR_EXECUTABLE)
  message(FATAL_ERROR "ANTLR_EXECUTABLE must be set to antlr complete jar file.")
endif()
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# add generated grammar to demo binary target
file(GLOB_RECURSE PARSER_SRC
    "src/parser/*.h"
    "src/parser/*.hpp"
    "src/parser/*.cpp"
    "src/parser/*.cc"
    )
add_executable(demo src/main.cc ${PARSER_SRC})
target_link_libraries(demo antlr4_static)
