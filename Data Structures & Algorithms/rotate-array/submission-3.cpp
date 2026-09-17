void reverse (vector<int> &nums, int i,  int l) {
    while (i < l) {
        int temp = nums[i];
        nums[i] = nums[l];
        nums[l] = temp;
        i++;
        l--;
    }
}

class Solution {

public:
    void rotate(vector<int>& nums, int k) {

        k %= nums.size();

        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
};