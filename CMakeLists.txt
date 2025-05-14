cmake_minimum_required(VERSION 3.10)
project(CPP_PRACTICE)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(PracticeProblems)
add_subdirectory(Projects)

# Optional: Print sources to debug
message(STATUS "Source Files: ${PROJECT_SOURCES}")
