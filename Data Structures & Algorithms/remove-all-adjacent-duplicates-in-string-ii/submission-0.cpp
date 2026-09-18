class Solution {
private: 
    string modifyString(string s, int k) {

        string modified = "";

        for (int i = 0; i < s.length(); i++) {

            bool equalTillK = true;

            if (i + 1 < s.length() && s[i] == s[i + 1]) {

                for (int j = i + 1; j < i + k && j < s.length(); j++) {

                    if (s[i] != s[j]) {
                        equalTillK = false;
                        break;
                    }
                }

                if (equalTillK && i + k <= s.length()) {
                    i += k - 1;
                    continue;
                }
            }

            modified += s[i];
        }

        for (int i = 0; i < modified.length(); i++) {

            int count = 0;

            if (i + 1 < modified.length() &&
                modified[i] == modified[i + 1]) {

                count++;

                for (int j = i + 1;
                     j < i + k && j < modified.length();
                     j++) {

                    if (modified[i] != modified[j]) {
                        break;
                    } else {
                        count++;
                    }
                }

                if (count >= k) {
                    modified = modifyString(modified, k);
                    break;
                }
            }
        }

        return modified;
    }

public:
    string removeDuplicates(string s, int k) {
        return modifyString(s, k);
    }
};