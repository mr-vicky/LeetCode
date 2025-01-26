class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int res[] = new int[n * 2];
        for(int i = 0; i < nums.length; i++){
            res[i] = nums[i];
            res[n + i] = nums[i];
        }
        return res;
    }
}