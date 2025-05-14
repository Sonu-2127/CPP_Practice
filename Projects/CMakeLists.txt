add_executable(MyExecutable Source/main.cpp)

# Link PracticeProblems library
target_link_libraries(MyExecutable PRIVATE PracticeProblems)

target_include_directories(MyExecutable PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Interface
)