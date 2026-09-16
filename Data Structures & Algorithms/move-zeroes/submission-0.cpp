class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> arr;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
            } else {
                arr.push_back(nums[i]);
            }
        }

        // Put non-zero elements first
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = arr[i];
        }

        // Put zeroes at the end
        for (int i = arr.size(); i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};