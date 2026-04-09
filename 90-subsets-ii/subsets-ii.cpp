class Solution {
public:
    void subset(vector<int>& nums, int index, vector<int>& sub, int n, vector<vector<int>>& ans) {
        ans.push_back(sub);  // add current subset

        for (int i = index; i < n; i++) {
            // Skip duplicates
            if (i > index && nums[i] == nums[i - 1]) continue;

            sub.push_back(nums[i]);
            subset(nums, i + 1, sub, n, ans);
            sub.pop_back(); // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(nums.begin(), nums.end()); // step 1
        subset(nums, 0, sub, nums.size(), ans);
        return ans;
    }
};
