class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for (int i: nums) {
            if (m.count(i)) {
                return true;
            }
            m.insert(i);
        }
        return false;
    }
};