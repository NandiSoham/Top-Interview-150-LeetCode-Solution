class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ansArr(n);
        ansArr[0] = 1;

        for(int i = 1; i < n; i++){
            ansArr[i] = nums[i - 1] * ansArr[i - 1];
        }

        int rightSideProduct = 1;
        for(int i = n - 1; i >= 0; i--){
            ansArr[i] = ansArr[i] * rightSideProduct;
            rightSideProduct *= nums[i];
        }

        return ansArr;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
