class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        idx = 0
        for it in nums:
            if idx < 2 or nums[idx - 2] != it:
                nums[idx] = it
                idx += 1
        
        return idx



# Time COmplexity -> O(n)
# Space Complexity -> O(1)
