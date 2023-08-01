class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int max=nums[nums.size()-1];
        int res=0;
        while(k--){
            res+=max;
            max++;
        }
        return res;
    }
};