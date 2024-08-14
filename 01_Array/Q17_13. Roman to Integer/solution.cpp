class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp;
        int n = s.length();
        int intergerVal = 0;

        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        for(int i = 0; i < n; i++){
            if(mpp[s[i]] < mpp[s[i+1]]) 
                intergerVal -= mpp[s[i]];
            else
                intergerVal += mpp[s[i]];
        }

        return intergerVal;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(n)
