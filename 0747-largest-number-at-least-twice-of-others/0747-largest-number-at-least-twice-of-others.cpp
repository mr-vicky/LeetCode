// TC: O(n(log(n)))
// SC: O(n)
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int x = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        if(nums[n-1]<nums[n-2]*2)   
            return -1;
        else x = nums[n-1];

        for(int i=0; i<n; i++)
            if(v[i]==x)  return i;
        return 0;
    }
};