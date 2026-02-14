class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currentmax=0;
       int globalmax=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
        currentmax+=nums[i];
        if(currentmax>globalmax)
        globalmax=currentmax;
        if(currentmax<0)
        currentmax=0;
       } 
       return globalmax;
    }
};