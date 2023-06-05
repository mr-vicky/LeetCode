class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res;
        int max_count = 0;
        int idx = 0;

        for(int i=0; i<mat.size(); i++){
            int curr_count = 0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j]==1){
                    curr_count++;
                }
            }
            if(max_count < curr_count){
                max_count = curr_count;
                idx = i;
            }
        }

        res.push_back(idx);
        res.push_back(max_count);
        return res;
    }
};