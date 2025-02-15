// Method 3: COunting Sort
// TC: O(N)
// SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int>count;

        for(auto n : nums){
            count[n]++;
        }

        int index = 0;
        for(int i = 0; i < 3; i++){
            while(count[i]-- > 0){
                nums[index++] = i;
            }
        }
    }
};