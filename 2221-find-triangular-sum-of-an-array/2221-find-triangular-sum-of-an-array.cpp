class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>newNums;
        int i = 0;

        while(size(nums)>1)
        {
            for(int i = 0; i<size(nums)-1; i++)
                newNums.push_back((nums[i]+nums[i+1])%10);
                
            nums = newNums;
            newNums.clear();
            i=0;
        }
        return nums[0];
    }
};