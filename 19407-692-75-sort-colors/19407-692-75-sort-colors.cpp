// Method 2: 
// TC: O(N)
// SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count_zero = 0;
        int count_one = 0;
        int count_two = 0;

        for(auto num : nums){
            if(num == 0) count_zero++;
            if(num == 1) count_one++;
            if(num == 2) count_two++;
        }
        
        nums.clear();
        while(count_zero){
            nums.push_back(0);
            count_zero--;
        }
        while(count_one){
            nums.push_back(1);
            count_one--;
        }
        while(count_two){
            nums.push_back(2);
            count_two--;
        }
    }
};