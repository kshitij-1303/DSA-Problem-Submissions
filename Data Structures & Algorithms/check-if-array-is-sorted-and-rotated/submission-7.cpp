class Solution {
public:
    bool check(vector<int>& nums) { 
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] < nums[i]) {

                int first = nums[0];
                for (int j = i + 2; j < nums.size(); j++) {

                    if (first < nums[j]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    
};