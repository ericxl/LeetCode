cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 17)

project(Leetcode)

include_directories("inc")

add_executable(001
        src/001_TwoSum/Solution.cpp)

add_executable(028
        src/028_StrStr/Solution.cpp)

add_executable(048
        src/048_RotateImage/Solution.cpp)

add_executable(151
        src/151_ReverseWordsInAString/Solution.cpp)

add_executable(165
        src/165_CompareVersionNumbers/Solution.cpp)

add_executable(221
        src/221_MaximalSquare/Solution.cpp)

add_executable(257
        src/257_BinaryTreePaths/Solution.cpp)

add_executable(565
        src/565_ArrayNesting/Solution.cpp)
