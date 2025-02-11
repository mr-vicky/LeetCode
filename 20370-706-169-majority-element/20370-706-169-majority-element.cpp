// Method 1: 
// TC: O(N*logN)
// SC: O(1) or O(m) according to sorting algo.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
};