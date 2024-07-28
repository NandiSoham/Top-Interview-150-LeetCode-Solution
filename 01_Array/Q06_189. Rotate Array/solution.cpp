class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tempArr(nums.size());
        for(int  i = 0; i < nums.size(); i++){
            tempArr[(i+k)%nums.size()] = nums[i];
        }

        nums = tempArr ;
    }
};



// Time Complexity ->O(n)
// Space Complexity -> O(n)
