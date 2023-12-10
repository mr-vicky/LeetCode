class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int columns = matrix.size();
        int rows = matrix[0].size();
        vector<vector<int>>res(rows, vector<int>(columns, 0));

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
};