"""
Name : Kyle Bautista
Januarary 2024
1. Two Sum
Easy
https://leetcode.com/problems/two-sum/description/
"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        valueToIndex = {}
        for index, num in enumerate(nums):
            if target - num in valueToIndex:
                return (valueToIndex[target-num], index)
            valueToIndex[num] = index 
        return nums