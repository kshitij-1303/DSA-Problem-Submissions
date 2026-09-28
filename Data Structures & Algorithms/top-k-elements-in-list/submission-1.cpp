class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans(k);
        vector<int> freq(2001); // int range is from -1k to 1k so 2001 is size

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i] + 1000]++; // If nums[i] = 1, increments 1001th element of freq array.
        }

        for (int i = 0; i < ans.size(); i++) {
            auto mx = max_element(freq.begin(), freq.end());

            // mx is pointing to the address of mx element and this line gives the index
            int index = mx - freq.begin(); 

            int number = index - 1000;

            ans[i] = number;

            *mx = -1;
        }
        
        return ans;
    }
};