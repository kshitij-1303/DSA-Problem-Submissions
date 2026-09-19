class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int l = 0;
        int r = matrix.size() - 1;

        while (l < r) {
            for (int i = 0; i < r - l; i++) {
                // store top left
                int top_left = matrix[l][l + i];

                // bottom left to top left
                 matrix[l][l + i] = matrix[r - i][l];

                // bottom right to bottom left
                matrix[r - i][l] = matrix[r][r - i];

                // top right to bottom right
                matrix[r][r - i] = matrix[l + i][r];

                //top left to top right
                matrix[l + i][r] = top_left;
            }
            l++;
            r--;
        }



    }
};