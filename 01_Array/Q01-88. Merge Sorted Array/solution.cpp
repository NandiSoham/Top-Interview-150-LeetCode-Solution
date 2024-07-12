class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1;
        int ind1 = m - 1, ind2 = n - 1;

        while(ind1 >= 0 && ind2 >= 0){
            if(nums1[ind1] > nums2[ind2]){
                nums1[last] = nums1[ind1];
                ind1--;
            } else{
                nums1[last] = nums2[ind2];
                ind2--;
            }
            last--;
        }

        while(ind2 >= 0){
            nums1[last] = nums2[ind2];
            ind2--, last--;
        }
    }
};



// Time Complexity -> O(m+n)
// Space Complexity -> O(1)
