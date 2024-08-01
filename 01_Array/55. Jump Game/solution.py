class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        max_reachable_idx = 0
        for i in range(0, n):
            if i > max_reachable_idx: return False
            max_reachable_idx = max(max_reachable_idx, i + nums[i])

        return True



# Time Complexity -> O(n)
# Space Complexity -> O(1)
