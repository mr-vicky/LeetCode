// Using HashMap
// TC: O(N)
// SC: O(N)
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int res[] = new int[2];
        int n = nums.length;

        for(int i = 0; i < n; i++){
            map.put(nums[i], i);
        }

        for(int i = 0; i < n; i++){
            int diff = target - nums[i];
            if(map.containsKey(diff) && map.get(diff) != i){
                res[0] = map.get(diff);
                res[1] = i;
            }
        }
        return res;
    }
}