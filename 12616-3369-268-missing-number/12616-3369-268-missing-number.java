// Solution 2: Using the formula of sum of N natural numbers
// TC: O(N)
// SC: O(1) 
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum_nums = 0;
        for(int i = 0; i < n; i++)
            sum_nums += nums[i];
        int sum = n * (n + 1)/2;
        return sum - sum_nums;
    }
}