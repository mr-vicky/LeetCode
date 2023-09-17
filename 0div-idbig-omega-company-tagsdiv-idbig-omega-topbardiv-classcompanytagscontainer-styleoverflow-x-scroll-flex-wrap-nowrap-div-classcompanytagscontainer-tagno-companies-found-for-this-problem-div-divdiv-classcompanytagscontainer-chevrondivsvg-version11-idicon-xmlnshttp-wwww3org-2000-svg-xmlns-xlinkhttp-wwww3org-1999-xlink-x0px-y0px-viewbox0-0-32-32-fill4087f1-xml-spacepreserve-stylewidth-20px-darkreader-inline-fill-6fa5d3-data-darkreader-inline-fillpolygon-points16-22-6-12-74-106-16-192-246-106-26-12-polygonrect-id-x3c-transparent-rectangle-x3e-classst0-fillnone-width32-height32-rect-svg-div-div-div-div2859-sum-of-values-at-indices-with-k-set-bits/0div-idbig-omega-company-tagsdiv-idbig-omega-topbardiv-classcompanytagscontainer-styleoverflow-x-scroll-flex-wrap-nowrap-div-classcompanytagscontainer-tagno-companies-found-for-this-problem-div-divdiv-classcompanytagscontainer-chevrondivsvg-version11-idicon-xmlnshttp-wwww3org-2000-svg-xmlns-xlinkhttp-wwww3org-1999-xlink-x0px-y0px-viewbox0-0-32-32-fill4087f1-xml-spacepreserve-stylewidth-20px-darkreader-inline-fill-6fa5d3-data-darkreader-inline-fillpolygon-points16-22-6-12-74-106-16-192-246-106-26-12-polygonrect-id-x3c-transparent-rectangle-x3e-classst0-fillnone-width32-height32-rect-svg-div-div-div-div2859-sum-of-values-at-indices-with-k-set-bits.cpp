class Solution {
public:
    // Function to get count if set bits 
    int getSetBits(int n){
        unsigned int count = 0;
        while(n){
            count += n & 1;
            n = n >> 1;
        }
        return count;
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size(); 
        int res = 0;
        for(int i = 0; i < n; i++){
            if(getSetBits(i) == k){
                res += nums[i];
            }
         }
        return res;
    }
};