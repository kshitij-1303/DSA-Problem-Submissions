class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
         for (auto it = nums.begin(); it != nums.end(); ++it) {
             mp[*it]++;
         }
         int maxVal = 0;
         int maxKey = 0;
         for (auto &p: mp) {
            if (p.second > maxVal) {
                maxVal = p.second;
                maxKey = p.first;
            }
         }
         return maxKey;
    }
};