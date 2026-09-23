class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int current = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (current == nums[i]) {
                count++;
            } else {
                count--;
            }
            
            if (count == 0) {
                current = nums[i + 1];
                count++;
                i++;
            }
            
        }
        return current;
    }
};