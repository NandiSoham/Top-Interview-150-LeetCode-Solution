class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        min_price = float('inf')
        max_profit = 0

        for i in range(n):
            min_price = min(min_price, prices[i])
            max_profit = max(max_profit, prices[i] - min_price)
        
        return max_profit



# Time Complexity -> O(n)
# Space Complexity -> O(1)
