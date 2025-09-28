class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int end=0,mid,ans;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        int start=sum/h;
        if(start==0)
        start=1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int k=0;
            for(int i=0;i<n;i++)
            {
                k+=piles[i]/mid;
                if(piles[i]%mid)
                k++;
            }
            if(k>h)
            start=mid+1;
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};