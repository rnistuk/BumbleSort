#include_directories(.. "${GOOGLE_TEST_DIR}" "${GOOGLE_TEST_DIR}/include")
#add_executable(bumble_test bumble_test.cpp)

enable_testing()
include(GoogleTest)
include_directories(.. "${GOOGLE_TEST_DIR}" "${GOOGLE_TEST_DIR}/include")
add_executable(bumble_test bumble_test.cpp)
target_link_libraries(bumble_test gtest)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)