class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;

        for (int num: nums) {
            mp[num]++;
        }
        
        // Map sorts in O(n*logn)
        for (auto it = mp.begin(); it != mp.end(); it++) {
            for (int count = 0; count < it->second; count++) {
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }
};