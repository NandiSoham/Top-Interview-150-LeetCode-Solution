class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        citations.sort(reverse=True)

        for i in range(0, n):
            if citations[i] >= i+1: continue
            else: return i
        return n


# Time Complexiyt -> O(n)
# Space Complexity -> O(1)
