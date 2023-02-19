// TC: O(n)
// SC: O(1)
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int curr_num = original;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
            if(nums[i]==curr_num)
                curr_num*=2;
        return curr_num;
    }
};