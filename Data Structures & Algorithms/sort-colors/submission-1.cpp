class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int n = nums.size();
        int end = n - 1;

        while (end >= mid) {
            if (nums[mid] == 0) {
                swap(nums[start], nums[mid]);
                start++;
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[end], nums[mid]);
                end--;
            } else {
                mid++;
            }
        }
    }
};