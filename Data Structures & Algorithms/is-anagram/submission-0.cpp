class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            // for lower case
            if (ch >= 'a' && ch <= 'z') {
                int n = ch - 'a'; // example, b = 98 and n = 98 - 97, n = 1 for b.
                arr[n] += 1;
            }
        }
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];
            if (ch >= 'a' && ch <= 'z') {
                int n = ch - 'a'; 
                arr[n] -= 1;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        return true;

    }
};
