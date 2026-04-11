class Solution {
public:
void combination(int index,int n, int k,vector<int>&num,vector<vector<int>>&ans)
{
    if(num.size()==k)
    {
        ans.push_back(num);
        return;
    }
    vector<bool>used(21,0);
    for(int i=index;i<=n;i++)
    {
        if(!used[i])
        {
            used[i]=1;
            num.push_back(i);
            combination(i+1,n,k,num,ans);
            num.pop_back();
        }
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>num;
        combination(1,n,k,num,ans);
        return ans;
    }
};