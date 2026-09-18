class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; 
        int n = chars.size();
        int ansIdx = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }
            int count = j - i;
            chars[ansIdx++] = chars[i];
            if (count > 1) {
                 string cnt = to_string(count);
                for (char ch: cnt) {
                    chars[ansIdx++] = ch;
                }
            }
            i = j;

        }
        return ansIdx;
    }
};