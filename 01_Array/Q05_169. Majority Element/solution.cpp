// Problem Link -> https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(auto &it : nums){
            freq[it]++;
        }

        for(auto &element : freq){
            if(element.second > n/2) return element.first;
        }

        return -1;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(n)
