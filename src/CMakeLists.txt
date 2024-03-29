cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 17)

include_directories("../inc")

add_executable(000_0 000/SearchTree/Solution.cpp)
add_executable(000_1 000/MergeSort/Solution.cpp)
add_executable(000_2 000/QuickSort/Solution.cpp)
add_executable(000_3 000/TopologicalSortDirectedGraph/Solution.cpp)

add_executable(001 001_TwoSum/Solution.cpp)
add_executable(002 002_AddTwoNumbers/Solution.cpp)
add_executable(003 003_LongestSubstringWithoutRepeatingCharacters/Solution.cpp)
add_executable(004 004_MedianOfTwoSortedArrays/Solution.cpp)
add_executable(005 005_LongestPalindromicSubstring/Solution.cpp)
add_executable(007 007_ReverseInteger/Solution.cpp)
add_executable(008 008_StringToInteger/Solution.cpp)
add_executable(009 009_PalindromeNumber/Solution.cpp)
add_executable(011 011_ContainerWithMostWater/Solution.cpp)
add_executable(012 012_IntegerToRoman/Solution.cpp)
add_executable(013 013_RomanToInteger/Solution.cpp)
add_executable(014 014_LongestCommonPrefix/Solution.cpp)
add_executable(015 015_3Sum/Solution.cpp)
add_executable(016 016_3SumClosest/Solution.cpp)
add_executable(017 017_LetterCombinationsOfAPhoneNumber/Solution.cpp)
add_executable(019 019_RemoveNthNodeFromEndOfList/Solution.cpp)
add_executable(020 020_ValidParentheses/Solution.cpp)
add_executable(021 021_MergeTwoSortedLists/Solution.cpp)
add_executable(022 022_GenerateParentheses/Solution.cpp)
add_executable(024 024_SwapNodesInPairs/Solution.cpp)
add_executable(026 026_RemoveDuplicatesFromSortedArray/Solution.cpp)
add_executable(027 027_RemoveElement/Solution.cpp)
add_executable(028 028_StrStr/Solution.cpp)
add_executable(029 029_DivideTwoIntegers/Solution.cpp)
add_executable(031 031_NextPermutation/Solution.cpp)
add_executable(033 033_SearchInRotatedSortedArray/Solution.cpp)
add_executable(036 036_ValidSudoku/Solution.cpp)
add_executable(041 041_FirstMissingPositive/Solution.cpp)
add_executable(042 042_TrappingRainWater/Solution.cpp)
add_executable(043 043_MultiplyStrings/Solution.cpp)
add_executable(046 046_Permutations/Solution.cpp)
add_executable(047 047_PermutationsII/Solution.cpp)
add_executable(048 048_RotateImage/Solution.cpp)
add_executable(049 049_GroupAnagrams/Solution.cpp)
add_executable(050 050_PowXN/Solution.cpp)
add_executable(053 053_MaximumSubarray/Solution.cpp)
add_executable(054 054_SpiralMatrix/Solution.cpp)
add_executable(056 056_MergeIntervals/Solution.cpp)
add_executable(057 057_InsertInterval/Solution.cpp)
add_executable(062 062_UniquePaths/Solution.cpp)
add_executable(063 063_UniquePathsII/Solution.cpp)
add_executable(066 066_PlusOne/Solution.cpp)
add_executable(067 067_AddBinary/Solution.cpp)
add_executable(069 069_Sqrt/Solution.cpp)
add_executable(070 070_ClimbingStairs/Solution.cpp)
add_executable(072 072_EditDistance/Solution.cpp)
add_executable(073 073_SetMatrixZeroes/Solution.cpp)
add_executable(076 076_MinimumWindowSubstring/Solution.cpp)
add_executable(079 079_WordSearch/Solution.cpp)
add_executable(084 084_LargestRectangleInHistogram/Solution.cpp)
add_executable(088 088_MergeSortedArray/Solution.cpp)
add_executable(089 089_GrayCode/Solution.cpp)
add_executable(096 096_UniqueBinarySearchTrees/Solution.cpp)
add_executable(098 098_ValidateBinarySearchTree/Solution.cpp)
add_executable(100 100_SameTree/Solution.cpp)
add_executable(101 101_SymmetricTree/Solution.cpp)
add_executable(102 102_BinaryTreeLevelOrderTraversal/Solution.cpp)
add_executable(104 104_MaximumDepthOfBinaryTree/Solution.cpp)
add_executable(108 108_ConvertSortedArrayToBinarySearchTree/Solution.cpp)
add_executable(110 110_BalancedBinaryTree/Solution.cpp)
add_executable(111 111_MinimumDepthOfBinaryTree/Solution.cpp)
add_executable(118 118_PascalsTriangle/Solution.cpp)
add_executable(121 121_BestTimeToBuyAndSellStock/Solution.cpp)
add_executable(122 122_BestTimeToBuyAndSellStockII/Solution.cpp)
add_executable(124 124_BinaryTreeMaximumPathSum/Solution.cpp)
add_executable(128 128_LongestConsecutiveSequence/Solution.cpp)
add_executable(133 133_CloneGraph/Solution.cpp)
add_executable(136 136_SingleNumber/Solution.cpp)
add_executable(137 137_SingleNumberII/Solution.cpp)
add_executable(138 138_CopyListWithRandomPointer/Solution.cpp)
add_executable(139 139_WordBreak/Solution.cpp)
add_executable(140 140_WordBreakII/Solution.cpp)
add_executable(141 141_LinkedListCycle/Solution.cpp)
add_executable(142 142_LinkedListCycleII/Solution.cpp)
add_executable(145 145_BinaryTreePostorderTraversal/Solution.cpp)
add_executable(147 147_InsertionSortList/Solution.cpp)
add_executable(148 148_SortList/Solution.cpp)
add_executable(149 149_MaxPointsOnALine/Solution.cpp)
add_executable(150 150_EvaluateReversePolishNotation/Solution.cpp)
add_executable(151 151_ReverseWordsInAString/Solution.cpp)
add_executable(152 152_MaximumProductSubarray/Solution.cpp)
add_executable(153 153_FindMinimumInRotatedSortedArray/Solution.cpp)
add_executable(155 155_MinStack/Solution.cpp)
add_executable(159 159_LongestSubstringWithAtMostTwoDistinctCharacters/Solution.cpp)
add_executable(160 160_IntersectionOfTwoLinkedLists/Solution.cpp)
add_executable(162 162_FindPeakElement/Solution.cpp)
add_executable(163 163_MissingRanges/Solution.cpp)
add_executable(164 164_MaximumGap/Solution.cpp)
add_executable(165 165_CompareVersionNumbers/Solution.cpp)
add_executable(167 167_TwoSumII-InputArrayIsSorted/Solution.cpp)
add_executable(169 169_MajorityElement/Solution.cpp)
add_executable(171 171_ExcelSheetColumnNumber/Solution.cpp)
add_executable(172 172_FactorialTrailingZeroes/Solution.cpp)
add_executable(173 173_BinarySearchTreeIterator/Solution.cpp)
add_executable(179 179_LargestNumber/Solution.cpp)
add_executable(189 189_RotateArray/Solution.cpp)
add_executable(190 190_ReverseBits/Solution.cpp)
add_executable(191 191_NumberOf1Bits/Solution.cpp)
add_executable(198 198_HouseRobber/Solution.cpp)
add_executable(200 200_NumberOfIslands/Solution.cpp)
add_executable(202 202_HappyNumber/Solution.cpp)
add_executable(206 206_ReverseLinkedList/Solution.cpp)
add_executable(207 207_CourseSchedule/Solution.cpp)
add_executable(208 208_ImplementTrie/Solution.cpp)
add_executable(210 210_CourseScheduleII/Solution.cpp)
add_executable(214 214_ShortestPalindrome/Solution.cpp)
add_executable(215 215_KthLargestElementInAnArray/Solution.cpp)
add_executable(217 217_ContainsDuplicate/Solution.cpp)
add_executable(219 219_ContainsDuplicateII/Solution.cpp)
add_executable(220 220_ContainsDuplicateIII/Solution.cpp)
add_executable(221 221_MaximalSquare/Solution.cpp)
add_executable(222 222_CountCompleteTreeNodes/Solution.cpp)
add_executable(223 223_RectangleArea/Solution.cpp)
add_executable(226 226_InvertBinaryTree/Solution.cpp)
add_executable(228 228_SummaryRanges/Solution.cpp)
add_executable(229 229_MajorityElementII/Solution.cpp)
add_executable(230 230_KthSmallestElementInABST/Solution.cpp)
add_executable(231 231_PowerOfTwo/Solution.cpp)
add_executable(234 234_PalindromeLinkedList/Solution.cpp)
add_executable(235 235_LowestCommonAncestorOfABinarySearchTree/Solution.cpp)
add_executable(236 236_LowestCommonAncestorOfABinaryTree/Solution.cpp)
add_executable(237 237_DeleteNodeInALinkedList/Solution.cpp)
add_executable(238 238_ProductOfArrayExceptSelf/Solution.cpp)
add_executable(239 239_SlidingWindowMaximum/Solution.cpp)
add_executable(240 240_SearchA2DMatrixII/Solution.cpp)
add_executable(242 242_ValidAnagram/Solution.cpp)
add_executable(246 246_StrobogrammaticNumber/Solution.cpp)
add_executable(247 247_StrobogrammaticNumberII/Solution.cpp)
add_executable(249 249_GroupShiftedStrings/Solution.cpp)
add_executable(251 251_Flatten2DVector/Solution.cpp)
add_executable(252 252_MeetingRooms/Solution.cpp)
add_executable(253 253_MeetingRoomsII/Solution.cpp)
add_executable(257 257_BinaryTreePaths/Solution.cpp)
add_executable(258 258_AddDigits/Solution.cpp)
add_executable(259 259_3SumSmaller/Solution.cpp)
add_executable(260 260_SingleNumberIII/Solution.cpp)
add_executable(261 261_GraphValidTree/Solution.cpp)
add_executable(266 266_PalindromePermutation/Solution.cpp)
add_executable(268 268_MissingNumber/Solution.cpp)
add_executable(270 270_ClosestBinarySearchTreeValue/Solution.cpp)
add_executable(272 272_ClosestBinarySearchTreeValueII/Solution.cpp)
add_executable(273 273_IntegerToEnglishWords/Solution.cpp)
add_executable(274 274_H-Index/Solution.cpp)
add_executable(276 276_PaintFence/Solution.cpp)
add_executable(279 279_PerfectSquares/Solution.cpp)
add_executable(280 280_WiggleSort/Solution.cpp)
add_executable(281 281_ZigzagIterator/Solution.cpp)
add_executable(283 283_MoveZeroes/Solution.cpp)
add_executable(284 284_PeekingIterator/Solution.cpp)
add_executable(286 286_WallsAndGates/Solution.cpp)
add_executable(287 287_FindTheDuplicateNumber/Solution.cpp)
add_executable(292 292_NimGame/Solution.cpp)
add_executable(293 293_FlipGame/Solution.cpp)
add_executable(298 298_BinaryTreeLongestConsecutiveSequence/Solution.cpp)
add_executable(310 310_MinimumHeightTrees/Solution.cpp)
add_executable(313 313_SuperUglyNumber/Solution.cpp)
add_executable(314 314_BinaryTreeVerticalOrderTraversal/Solution.cpp)
add_executable(318 318_MaximumProductOfWordLengths/Solution.cpp)
add_executable(319 319_BulbSwitcher/Solution.cpp)
add_executable(320 320_GeneralizedAbbreviation/Solution.cpp)
add_executable(326 326_PowerOfThree/Solution.cpp)
add_executable(328 328_OddEvenLinkedList/Solution.cpp)
add_executable(333 333_LargestBSTSubtree/Solution.cpp)
add_executable(335 335_SelfCrossing/Solution.cpp)
add_executable(338 338_CountingBits/Solution.cpp)
add_executable(340 340_LongestSubstringWithAtMostKDistinctCharacters/Solution.cpp)
add_executable(344 344_ReverseString/Solution.cpp)
add_executable(345 345_ReverseVowelsOfAString/Solution.cpp)
add_executable(346 346_MovingAverageFromDataStream/Solution.cpp)
add_executable(347 347_TopKFrequentElements/Solution.cpp)
add_executable(349 349_IntersectionOfTwoArrays/Solution.cpp)
add_executable(359 359_LoggerRateLimiter/Solution.cpp)
add_executable(371 371_SumOfTwoIntegers/Solution.cpp)
add_executable(374 374_GuessNumberHigherOrLower/Solution.cpp)
add_executable(383 383_RansomNote/Solution.cpp)
add_executable(384 384_ShuffleAnArray/Solution.cpp)
add_executable(387 387_FirstUniqueCharacterInAString/Solution.cpp)
add_executable(388 388_LongestAbsoluteFilePath/Solution.cpp)
add_executable(389 389_FindTheDifference/Solution.cpp)
add_executable(392 392_IsSubsequence/Solution.cpp)
add_executable(394_DecodeString 394_DecodeString/Solution.cpp)
add_executable(400 400_NthDigit/Solution.cpp)
add_executable(401 401_BinaryWatch/Solution.cpp)
add_executable(406 406_QueueReconstructionByHeight/Solution.cpp)
add_executable(409 409_LongestPalindrome/Solution.cpp)
add_executable(412 412_FizzBuzz/Solution.cpp)
add_executable(415 415_AddStrings/Solution.cpp)
add_executable(419 419_BattleshipsInABoard/Solution.cpp)
add_executable(422 422_ValidWordSquare/Solution.cpp)
add_executable(433 433_MinimumGeneticMutation/Solution.cpp)
add_executable(447 447_NumberOfBoomerangs/Solution.cpp)
add_executable(448 448_FindAllNumbersDisappearedInAnArray/Solution.cpp)
add_executable(458 458_PoorPigs/Solution.cpp)
add_executable(459 459_RepeatedSubstringPattern/Solution.cpp)
add_executable(461 461_HammingDistance/Solution.cpp)
add_executable(463 463_IslandPerimeter/Solution.cpp)
add_executable(476 476_NumberComplement/Solution.cpp)
add_executable(482 482_LicenseKeyFormatting/Solution.cpp)
add_executable(500 500_KeyboardRow/Solution.cpp)
add_executable(501 501_FindModeInBinarySearchTree/Solution.cpp)
add_executable(530 530_MinimumAbsoluteDifferenceInBST/Solution.cpp)
add_executable(535 535_EncodeAndDecodeTinyURL/Solution.cpp)
add_executable(540 540_SingleElementInASortedArray/Solution.cpp)
add_executable(543 543_DiameterOfBinaryTree/Solution.cpp)
add_executable(557 557_ReverseWordsInAStringIII/Solution.cpp)
add_executable(561 561_ArrayPartitionI/Solution.cpp)
add_executable(565 565_ArrayNesting/Solution.cpp)
add_executable(581 581_ShortestUnsortedContinuousSubarray/Solution.cpp)
add_executable(604 604_DesignCompressedStringIterator/Solution.cpp)
add_executable(617 617_MergeTwoBinaryTrees/Solution.cpp)
add_executable(643 643_MaximumAverageSubarrayI/Solution.cpp)
add_executable(654 654_MaximumBinaryTree/Solution.cpp)
add_executable(657 657_JudgeRouteCircle/Solution.cpp)
add_executable(665 665_Non-DecreasingArray/Solution.cpp)
add_executable(681 681_NextClosestTime/Solution.cpp)
add_executable(683 683_KEmptySlots/Solution.cpp)
add_executable(728 728_SelfDividingNumbers/Solution.cpp)
add_executable(734 734_SentenceSimilarity/Solution.cpp)
add_executable(737 737_SentenceSimilarityII/Solution.cpp)
add_executable(760 760_FindAnagramMappings/Solution.cpp)
add_executable(771 771_JewelsAndStones/Solution.cpp)
add_executable(783 783_MinimumDistanceBetweenBSTNodes/Solution.cpp)
