// TC: O(log(N))
// SC: O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max1 = nums[n-1];
        int max2 = nums[n-2];
        return (max1 - 1) * (max2 - 1);
    }
};