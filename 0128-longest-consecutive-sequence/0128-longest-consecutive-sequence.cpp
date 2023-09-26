// Method 2:
// TC: O(n*log(n))
// SC: O(1)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0; 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int last_smaller = INT_MIN;
        int count = 0;
        int longest = 1;

        for(int i = 0; i < n; i++){
            if(nums[i] - 1 == last_smaller){
                count++;
                last_smaller = nums[i];
            }
            else if(last_smaller != nums[i]){
                count = 1;
                last_smaller = nums[i];
            }

            longest = max(longest, count);
        }
        return longest;
    }
};