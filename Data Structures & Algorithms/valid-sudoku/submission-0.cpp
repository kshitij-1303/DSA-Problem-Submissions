class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                char num = board[i][j];

                int box = (i / 3) * 3 + (j / 3);

                if (rows[i].find(num) != rows[i].end())
                    return false;

                if (cols[j].find(num) != cols[j].end())
                    return false;

                if (boxes[box].find(num) != boxes[box].end())
                    return false;

                rows[i].insert(num);
                cols[j].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};