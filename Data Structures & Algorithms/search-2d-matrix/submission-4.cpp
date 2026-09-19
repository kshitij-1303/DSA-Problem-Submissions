class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int col = matrix[0].size();
        int e = matrix.size() * col;
        int mid = s + (e - s)/2;
        
        while (s < e) {
// Example mid = 6, 6/4 = 1 and 6%4 = 2 so matrix[1][2] = 6th index element 12.
            
            int midMat = matrix[mid / col][mid % col];
            if (midMat > target) {
                e = mid;
            } else if (midMat < target) {
                s = mid + 1;
            } else {
                return true;
            }
        mid = s + (e - s)/2;
        }
    return false;
    }
};
