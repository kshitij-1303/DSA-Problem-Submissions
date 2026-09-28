class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0;
        int w = 0;
        int b = 0;
        for (int num: nums) {
            if (num == 0) {
                r++;
            }
            else if (num == 1) {
                w++;
            } else {
                b++;
            }
        }
        for (int &num : nums) {
            if (r > 0) {
            num = 0;
            r--;
            }
            else if (w > 0) {
                num = 1;
                w--;
            }
            else {
                num = 2;
                b--;
            }
        }   
    }
};