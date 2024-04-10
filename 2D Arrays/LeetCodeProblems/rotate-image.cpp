class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int colIndex = 0;
        vector<vector<int>> ans;
        ans=matrix;
        for (int i = 0; i < row; i++) {
            int rowIndex = row - 1;
            for (int j = 0; j < col; j++) {
                matrix[i][j] = ans[rowIndex][colIndex];
                rowIndex--;
            }
            colIndex++;
        }
    }
};