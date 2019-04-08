
add_executable(bumble main.cpp)
target_include_directories(bumble PRIVATE bumble_sort)
target_link_libraries(bumble bumble_sort)
add_subdirectory(bumble_sort)



