// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        vector<int>small;
        vector<int>great;
        vector<int>piv;

        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]<pivot)
                small.push_back(nums[i]);
            else if(nums[i]>pivot)
                great.push_back(nums[i]);
            else 
                piv.push_back(nums[i]);
        }

        for(auto x: small)
            ans.push_back(x);
        for(auto x: piv)
            ans.push_back(x);
        for(auto x: great)
            ans.push_back(x);

        return ans;
    }
};