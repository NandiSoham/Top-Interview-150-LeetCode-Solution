class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        n = len(s)
        idx = n - 1
        word_length = 0

        while idx >= 0 and s[idx] == ' ':
            idx -= 1

        while idx >= 0 and s[idx] != ' ':
            idx -= 1
            word_length += 1

        return word_length


# Time Complexity -> O(n)
# Space Complexity -> O(1)
