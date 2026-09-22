class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ansMap;
        vector<vector<string>> ans;

        for (string str: strs) {
            string key = str;
            sort(key.begin(), key.end());
            ansMap[key].push_back(str);
        }
        
        for (auto& p : ansMap) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
