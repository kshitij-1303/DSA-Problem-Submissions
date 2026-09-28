class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string s: strs) {
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

vector<string> decode(string s) {
    vector<string> ans;

    int i = 0;

    while (i < s.size()) {
        int j = i;

        while (s[j] != '#') {
            j++;
        }

        int len = stoi(s.substr(i, j - i));

        string str = "";

        for (int k = 0; k < len; k++) {
            str += s[j + 1 + k];
        }

        ans.push_back(str);

        i = j + 1 + len;
    }

    return ans;
}
};