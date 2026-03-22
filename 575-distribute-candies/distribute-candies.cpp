class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
        int count=1;
        int n=candyType.size()/2;
        for(int i=1;i<candyType.size();i++)
        {
            if(candyType[i]!=candyType[i-1])
            count++;
        }
        return min(count,n);
    }
};