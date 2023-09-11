// Method : 2 (Inplace)
// TC: O(n*n)
// SC: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i = n-1; i >= 0; i--){
            if(nums[i] == 0){
                int j = i;
                count++;
                while(j < n-1){
                    nums[j] = nums[j + 1];
                    j++;
                }
            }
        }
        int i = n-1;
        while(count){
            nums[i] = 0;
            count--;
            i--;
        }
    }
};