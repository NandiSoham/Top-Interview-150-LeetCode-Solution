class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int idx = n - 1;
        int wordLength = 0;

        while(idx >= 0 && s[idx] == ' ') idx--;

        while(idx >= 0 && s[idx] != ' '){
            idx--;
            wordLength++;
        }

        return wordLength;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
