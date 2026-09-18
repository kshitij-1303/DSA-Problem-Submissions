class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length())
            return false;

        int arr[26] = {0};

        // Frequency of s1
        for (int i = 0; i < s1.length(); i++) {
            arr[s1[i] - 'a']++;
        }

        // Try every window of s1.length()
        for (int i = 0; i <= s2.length() - s1.length(); i++) {

            int temp[26];

            // Copy original frequencies
            for (int k = 0; k < 26; k++) {
                temp[k] = arr[k];
            }

            // Check current window
            for (int j = i; j < i + s1.length(); j++) {

                int n = s2[j] - 'a';

                if (temp[n] == 0)
                    break;

                temp[n]--;
            }

            // Check if everything was used
            bool found = true;

            for (int k = 0; k < 26; k++) {
                if (temp[k] != 0) {
                    found = false;
                    break;
                }
            }

            if (found)
                return true;
        }

        return false;
    }
};