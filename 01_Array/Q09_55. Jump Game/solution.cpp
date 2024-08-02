class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReachableIdx = 0;

        for(int i = 0; i < n; i++){
            if(i > maxReachableIdx) return false;
            maxReachableIdx = max(maxReachableIdx, i + nums[i]);
        }

        return true;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
