class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> res;
        vector<int>temp;

        for(int i = 0; i < n; i++){
            for(int j = n-1; j >= 0; j--){
               temp.push_back(matrix[j][i]); 
            }
            res.push_back(temp);
            temp.clear();
        }
        matrix = res;
    }
};