cmake_minimum_required(VERSION 3.9)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode
        src/001_TwoSum/Solution.cpp src/028_StrStr/Solution.cpp inc/leetcode.h src/048_RotateImage/Solution.cpp src/151_ReverseWordsInAString/Solution.cpp src/165_CompareVersionNumbers/Solution.cpp src/221_MaximalSquare/Solution.cpp src/257_BinaryTreePaths/Solution.cpp src/565_ArrayNesting/Solution.cpp)
