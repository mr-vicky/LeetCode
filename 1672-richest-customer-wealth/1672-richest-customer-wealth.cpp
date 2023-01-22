// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int max_wealth=0;
    int m=accounts.size();

    for(int i=0; i<m; i++)
    {
        int n=accounts[i].size();
        int curr_wealth=0;
        for(int j=0; j<n; j++)
        {
            curr_wealth+=accounts[i][j];
            max_wealth=max(max_wealth, curr_wealth);
        }
    }  
    return max_wealth;
    }
};