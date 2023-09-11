// Method 3: Most Optimal(Two Pointer approach)
// TC: O(n)
// SC: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        for(int i = j+1; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};