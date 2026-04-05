class Solution {
public:
    void subset(vector<int>& nums, int index, vector<int>& sub, int n, vector<vector<int>>& ans) {
        if (index == n) {
            ans.push_back(sub);
            return;
        }
        
        // Include nums[index]
        sub.push_back(nums[index]);
        subset(nums, index + 1, sub, n, ans);
        sub.pop_back(); // backtrack
        
        // Exclude nums[index]
        subset(nums, index + 1, sub, n, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        subset(nums, 0, sub, nums.size(), ans);
        return ans;
    }
};
