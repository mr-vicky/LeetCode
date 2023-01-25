// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;

        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; (j<nums.size() && (i!=j)); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};