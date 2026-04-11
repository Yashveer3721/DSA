class Solution {
public:
    void combination(vector<int>& candidates,int index,int n,int target,vector<int>& nums,vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(nums);
            return;
        }
        if(index==n || target<0) 
        return;

        for(int i=index;i<n;i++)
        {
            nums.push_back(candidates[i]);
            // allow reuse of same element → pass i (not i+1)
            combination(candidates,i,n,target-candidates[i],nums,ans);
            nums.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> nums;
        sort(candidates.begin(),candidates.end());
        combination(candidates,0,candidates.size(),target,nums,ans);
        return ans;
    }
};
