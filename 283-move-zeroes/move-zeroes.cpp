class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first = 0, start = 0;
        while (start < nums.size()) {
            if (nums[start] != 0) {
                swap(nums[start], nums[first]);
                first++;
            }
            start++;
        }
    }
};