class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        while (k >= nums.size()) {
            k -= nums.size();
        }

        int j = 0;
        vector<int> newNums(nums.size());

        for (int i = nums.size() - k; i < nums.size(); i++) {
            newNums[j] = nums[i];
            j++;
        }

        int l = 0;
        for (; j < nums.size(); j++) {
            newNums[j] = nums[l];
            l++;
        }

        nums = newNums;
    }
};