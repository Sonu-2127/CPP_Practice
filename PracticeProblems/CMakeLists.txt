add_library(PracticeProblems STATIC
    Arrays/Source/FindLargestElement.cpp
    Pointers/Source/001TypesOfPointers.cpp
)

target_include_directories(PracticeProblems PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Arrays/Interface
    ${CMAKE_CURRENT_SOURCE_DIR}/Pointers/Interface
)

target_include_directories(PracticeProblems PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})