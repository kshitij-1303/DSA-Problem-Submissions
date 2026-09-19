class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;

        vector<int> ans;

        int startingRow = 0;
        int endingRow = row - 1;
        int startingCol = 0;
        int endingCol = col - 1;

        int count = 0;

        while (count < total) {

            for (int idx = startingCol; idx <= endingCol && count < total; idx++) {
                ans.push_back(matrix[startingRow][idx]);
                count++;
            }
            startingRow++;

            for (int idx = startingRow; idx <= endingRow && count < total; idx++) {
                ans.push_back(matrix[idx][endingCol]);
                count++;
            }
            endingCol--;

            for (int idx = endingCol; idx >= startingCol && count < total; idx--) {
                ans.push_back(matrix[endingRow][idx]);
                count++;
            }
            endingRow--;

            for (int idx = endingRow; idx >= startingRow && count < total; idx--) {
                ans.push_back(matrix[idx][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};