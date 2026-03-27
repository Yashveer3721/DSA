class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Case 1: product of top 3 largest
        int case1 = nums[n-1] * nums[n-2] * nums[n-3];
        
        // Case 2: product of 2 smallest (possibly negative) and largest
        int case2 = nums[0] * nums[1] * nums[n-1];
        
        return max(case1, case2);
    }
};