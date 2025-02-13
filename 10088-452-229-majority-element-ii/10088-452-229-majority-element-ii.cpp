// Method 1: Hashing
// TC: O(N)
// SC: O(N)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;

        for(auto n : nums){
            count[n]++;
        }
        vector<int>res;
        for(auto x : count){
            if(x.second > n/3){
                res.push_back(x.first);
            }
        }
        return res;
    }
};