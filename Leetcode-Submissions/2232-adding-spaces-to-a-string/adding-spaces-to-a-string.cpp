class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string modifiedString = "";
        modifiedString.reserve(s.size() + spaces.size());
        int j = 0;

        for (int i = 0; i < s.length(); i++) {

            if (j < spaces.size() && i == spaces[j]) {
                modifiedString += " ";
                j++;
            }

            modifiedString += s[i];
        }

        return modifiedString;
    }
};