class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int max_sum = 0;
        int curr_sum = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j)
        {
            curr_sum = nums[i]+nums[j];
            max_sum = max(max_sum, curr_sum);
            curr_sum = 0;
            i++;
            j--;
        }
        return max_sum;
    }
};


