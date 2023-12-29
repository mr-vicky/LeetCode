class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        if(k == 0) return true;
        for(i = 0; i < n; i++)
            if(nums[i] == 1)
                break;
        
        j = i+1;
        int diff = 0;
        while(i < n && j < n){
            diff = 0;
            if(nums[j] == 1){
                diff = j - i - 1;
                if(diff < k)    return false;
                i = j;
                j++;
            }
            j++;
        }
        return true;
    }
};