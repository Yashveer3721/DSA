class Solution {
public:
void targetsum(vector<int>& nums,int &count,int index,int target,int n)
{
    if(index==n)
    {
        if(target==0)
            count++;
        return;
    }
    // if(target<0 || index==n)
    // return;
    // ans.push_back('-'+to_string(nums[index]));
    targetsum(nums,count,index+1,target+nums[index],n);
    // ans.pop_back();
    // ans.pop_back();
    // ans.push_back('+'+to_string(nums[index]));
    // target-nums[index];
    targetsum(nums,count,index+1,target-nums[index],n);
    // ans.pop_back();
    // ans.pop_back();
    // target+nums[index];
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        // vector<string>ans;
        targetsum(nums,count,0,target,nums.size());
        return count;
    }
};