// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]<0)
                    res++;
            }
        }
        return res;
    }
};