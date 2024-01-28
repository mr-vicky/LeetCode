class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int curr = nums[0];
        for(int i = 1; i < n; i++){
            if(curr < 0){
                curr = 0;
            }
            curr += nums[i];
            
            if(curr > maxi){
                maxi = curr;
            }
        }
        return maxi;
    }
};