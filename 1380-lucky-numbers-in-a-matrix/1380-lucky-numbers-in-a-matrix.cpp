class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v1, v2, res;

        for(int i=0; i<n; i++){
            int min = matrix[i][0];
            for(int j=0; j<m; j++){
                if(min > matrix[i][j]){
                    min = matrix[i][j];
                }
            }
            v1.push_back(min);
        }

        for(int j=0; j<m; j++){
            int max = matrix[0][j];
            for(int i=0; i<n; i++){
                if(max < matrix[i][j]){
                    max = matrix[i][j];
                }
            }
            v2.push_back(max);
        }

        for(auto x: v1)
            for(auto y: v2)
                if(x==y)
                    res.push_back(x);
        return res;
    }
};