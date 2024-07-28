class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        tempArr = [0] * n

        for i in range(n):
            tempArr[(i+k) % n ] = nums[i]
        
        nums[:] = tempArr
        
