class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0] * n
        ans[0] = 1

        for i in range(1, n):
            ans[i] = nums[i-1] * ans[i-1]
        
        right_side_product = 1
        for i in range(n-1, -1, -1):
            ans[i] *= right_side_product
            right_side_product *= nums[i]

        return ans



# Time Complexity -> O(n)
# Space Complexity ->O(1)
