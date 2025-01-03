// TC: O(N)
// SC: O(1)
class Solution {
    public int maxSubArray(int[] nums) {
       int n = nums.length;
       int sum = 0;
       int max_sum = Integer.MIN_VALUE;
       int curr_sum = 0;
       for(int i = 0; i < n; i++){
            curr_sum += nums[i];
            if(max_sum < curr_sum){
                max_sum = curr_sum;
            }
            if(curr_sum < 0){
                curr_sum = 0;
            }
       } 
       return max_sum;
    }
}