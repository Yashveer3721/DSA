class Solution {
public:
void combination(vector<int>& candidates,int index,int n,int target,vector<int>&path,vector<vector<int>>&ans)
{
     if(target==0)
        {
            ans.push_back(path);
            return;
        }
     if(target<0 || index==n)
     return;
    vector<bool>used(51,0);
    for(int i=index;i<n;i++)
    {
        if(!(used[candidates[i]]))
        {
            used[candidates[i]]=1;
            path.push_back(candidates[i]);
            combination(candidates,i+1,n,target-candidates[i],path,ans);
            path.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>path;
        sort(candidates.begin(),candidates.end());
        combination(candidates,0,candidates.size(),target,path,ans);
        return ans;
    }
};