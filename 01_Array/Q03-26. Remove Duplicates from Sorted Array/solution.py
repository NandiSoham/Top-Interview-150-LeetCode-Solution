# Problem Link -> https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        j = 1
        n = len(nums)

        while j < n:
            if nums[i] != nums[j]:
                i+=1
                nums[i] = nums[j]
            j +=1
        
        return i+1


# Time Complexity -> O(n)
# Space Complexity -> O(1)
