cmake_minimum_required(VERSION 3.13)
project(bumblesort)

set(CMAKE_CXX_STANDARD 17)

project(googletest-download NONE)
include(ExternalProject)
ExternalProject_Add(googletest
        GIT_REPOSITORY    https://github.com/google/googletest.git
        GIT_TAG           master
        SOURCE_DIR        "${CMAKE_CURRENT_BINARY_DIR}/googletest-src"
        BINARY_DIR        "${CMAKE_CURRENT_BINARY_DIR}/googletest-build"
        CONFIGURE_COMMAND ""
        BUILD_COMMAND     ""
        INSTALL_COMMAND   ""
        TEST_COMMAND      ""
        )



set(GOOGLE_TEST_DIR ${CMAKE_CURRENT_BINARY_DIR}/googletest-src/googletest)
message("GOOGLE_TEST_DIR --  ${GOOGLE_TEST_DIR}")


add_subdirectory(src)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)