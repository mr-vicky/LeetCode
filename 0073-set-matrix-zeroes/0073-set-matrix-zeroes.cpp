class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row(matrix[0].size(), 0);
        vector<int>col(matrix.size(), 0);

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    col[i] = 1;
                    row[j] = 1;
                }
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(col[i] == 1 || row[j] == 1){
                   matrix[i][j] = 0;
                }
            }
        }
    }
};