class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int row=mat.size();
        int col=mat[0].size();
        int rowIndex=0;
        for(int m=0; m<=4; m++){
            for(int i=0; i<row; i++){
                for(int j=i+1; j<col; j++){
                    swap(mat[i][j], mat[j][i]);
                 }
             }
            for(int i=0; i<row; i++){
                int start=0;
                int end=col-1;
                while(start<end){
                    swap(mat[i][start++],mat[i][end--]);
                    }
            }
            if(mat==target) return true;
        }
        return false;
    }
};