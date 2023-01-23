// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int max_candies=0;
        int n = candies.size();
        for(int i=0; i<n; i++)
            if(max_candies<candies[i])
                max_candies=candies[i];
            
        for(int i=0; i<n; i++)
        {
            if(max_candies<=candies[i]+extraCandies)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};