# Problem Link -> https://leetcode.com/problems/majority-element/description/

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        freq = {}

        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        for key, value in freq.items():
            if value > n/2:
                return key
        
        return -1


      
# Time Complexity -> O(n)
# Space Complexity -> O(n)
