class Solution {
private:

    int addMax(map<int, int>& mp) {
        int maxFreq = 0;
        int maxNum = 0;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > maxFreq) {
                maxFreq = it->second;
                maxNum = it->first;
            }
        }

        mp.erase(maxNum);

        return maxNum;
    }

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;

        for (int num : nums) {
            mp[num]++;
        }

        while (k != 0) {
            int val = addMax(mp);
            ans.push_back(val);
            k--;
        }

        return ans;
    }
};