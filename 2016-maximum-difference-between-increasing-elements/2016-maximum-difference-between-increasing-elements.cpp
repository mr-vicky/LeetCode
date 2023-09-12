class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int curr = 0;
        int maxi = 0;
        bool flag = 0;
        
        for(int i = 0; i < nums.size(); i++){
            for(int  j = i+1; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    curr = nums[j] - nums[i];
                    flag = 1;
                }
                maxi = max(maxi, curr);
            }
        }
        if(flag == 0) return -1;
        return maxi;
    }
};