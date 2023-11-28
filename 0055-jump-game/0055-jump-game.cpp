class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int index = n-1;
        int i = n-1;

        while(i >= 0){
            if(i + nums[i] >= index){
                index = i;
                if(index == 0) return true;
            }
            i--;
        }
        return false;
    }
};