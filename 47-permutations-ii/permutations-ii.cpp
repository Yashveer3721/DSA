class Solution {
public:
    void permutation(vector<int>& nums, int index, int n, vector<vector<int>>& ans) {
        if (index == n - 1) {
            ans.push_back(nums);
            return;
        }

        // Use a set at each recursion level to avoid duplicate swaps
        unordered_set<int> seen;

        for (int i = index; i < n; i++) {
            if (seen.count(nums[i])) continue; // skip duplicates
            seen.insert(nums[i]);

            swap(nums[i], nums[index]);
            permutation(nums, index + 1, n, ans);
            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // sorting helps grouping duplicates
        permutation(nums, 0, nums.size(), ans);
        return ans;
    }
};
