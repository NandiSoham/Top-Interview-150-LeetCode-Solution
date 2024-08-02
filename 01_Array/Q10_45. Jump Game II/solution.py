class Solution:
    def jump(self, nums: List[int]) -> int:
        n = len(nums)
        total_jumps, coverage, last_jump_idx = 0,0,0
        destination = n - 1

        if n == 1: return 0

        for i in range(0, n):
            coverage = max(coverage, i + nums[i])

            if i == last_jump_idx:
                last_jump_idx = coverage
                total_jumps += 1

                if coverage >= destination: return total_jumps

        return total_jumps



# Time Complexity -> O(n) 
# Space C0mplexity -> O(1)
