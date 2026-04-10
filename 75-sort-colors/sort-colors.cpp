class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;              // boundary for 0s
        int mid = 0;              // current index
        int high = nums.size()-1; // boundary for 2s

        while (mid <= high) {
            if (nums[mid] == 0) {
                // put 0 at the front
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                // leave 1 in the middle
                mid++;
            }
            else { // nums[mid] == 2
                // put 2 at the end
                swap(nums[mid], nums[high]);
                high--;
                // mid not incremented here, because swapped value needs checking
            }
        }
    }
};
