add_library(PracticeProblems STATIC
    Arrays/Source/FindLargestElement.cpp
    Pointers/Source/001TypesOfPointers.cpp
    Vectors/Source/Vectors.cpp
)

target_include_directories(PracticeProblems PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Arrays/Interface
    ${CMAKE_CURRENT_SOURCE_DIR}/Pointers/Interface
    ${CMAKE_CURRENT_SOURCE_DIR}/Vectors/Interface
)

target_include_directories(PracticeProblems PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})