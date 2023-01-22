// TC: O(n)
// SC: O(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
                count++;
            }
        }
        for(int i=count; i<n; i++)
        {
            ans.push_back(0);
        }
        nums=ans;
    }
};