// Method 2: (In-place)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                count_0++;
            }
            else if(nums[i] == 1){
                count_1++;
            }
            else{
                count_2++;
            }
        }

        nums.clear();
        while(count_0){
            nums.push_back(0);
            count_0--;
        }
        while(count_1){
            nums.push_back(1);
            count_1--;
        }
        while(count_2){
            nums.push_back(2);
            count_2--;
        }
    }
};