// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
            nums[i]=abs(nums[i]);

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++)
        {
            int sq = 0;
            sq = nums[i]*nums[i];
            res.push_back(sq);
        }
        return res;
    }
};