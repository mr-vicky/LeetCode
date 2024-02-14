class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int size = matrix[0].size();
        vector<int>col;

        for(int i = 0; i < matrix[0].size(); i++){
            int maxi = 0;
            for(int j = 0; j < matrix.size(); j++){
                maxi = max(maxi, matrix[j][i]);
            }
            col.push_back(maxi);
        }

        int k = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = col[j];
                }
            }
        }
        return matrix;
    }
};