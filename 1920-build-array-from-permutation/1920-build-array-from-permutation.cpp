// TC: O(n)
// SC: O(1)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        int temp=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            temp=nums[nums[i]];
            ans.push_back(temp);
        }
        return ans;
    }
};