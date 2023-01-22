// TC: O(n)
// SC: O(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int>v;
        int n=nums.size();
        int sum=nums[0];

        v.push_back(nums[0]);

        for(int i=1; i<n; i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;
    }
};