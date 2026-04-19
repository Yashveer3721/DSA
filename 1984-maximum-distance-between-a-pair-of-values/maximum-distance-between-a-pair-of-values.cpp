class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxval = 0;
        int j = 0;
        for(int i = 0; i < nums1.size(); i++) {
            while(j < nums2.size() && nums2[j] >= nums1[i]) {
                j++;
            }
            if(j > 0) {
                maxval = max(maxval, (j - 1) - i);
            }
        }
        return maxval;
    }
};
