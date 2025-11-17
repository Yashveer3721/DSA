class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]<=target && matrix[i][n-1]>=target)
            {
                int start=0,end=n-1,mid;
                while(start<=end)
                {
                    mid=start-(start-end)/2;
                    if(matrix[i][mid]==target)
                    return 1;
                    else if(matrix[i][mid]<=target)
                    start=mid+1;
                    else
                    end=mid-1;
                }
            }
        }
        return 0;
    }
};