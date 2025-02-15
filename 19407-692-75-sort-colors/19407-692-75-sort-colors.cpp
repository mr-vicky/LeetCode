// TC: O(N)
// SC: O(N)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(auto n : nums){
            if(n == 0)  res.push_back(0);
        }        

        for(auto n : nums){
            if(n == 1)  res.push_back(1);
        }   

        for(auto n : nums){
            if(n == 2)  res.push_back(2);
        }   
        nums = res;
    }
};