class Solution {
public:
    int climbStairs(int n) {
        vector<int>nums{1, 2, 3};
        if(n < 4) return n;
        for(int i = 3; i < n; i++){
            nums.push_back(nums[i - 1] + nums[i - 2]);
        }
        return nums[n-1];
    }
};