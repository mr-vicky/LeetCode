class Solution {
public:
    int onesRow(vector<vector<int>>& grid, int i){
        int count = 0;
        for(int j = 0; j < grid[i].size(); j++){
            if(grid[i][j] == 1)
                count++;
        }
        return count;
    }

    int onesCol(vector<vector<int>>& grid, int j){
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            if(grid[i][j] == 1)
                count++;
        }
        return count;
    }

    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>res;
        vector<int>row;
        vector<int>col;
        int diff = 0;

        for(int i = 0; i <n; i++){
            row.push_back(onesRow(grid, i));
        }
        for(int i = 0; i <m; i++){
            col.push_back(onesCol(grid, i));
        }

        for(int i = 0; i < grid.size(); i++){
            vector<int>temp;
            for(int j = 0; j < grid[i].size(); j++){
                diff = row[i] + col[j] - (m - row[i]) - (n - col[j]);
                temp.push_back(diff);
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};