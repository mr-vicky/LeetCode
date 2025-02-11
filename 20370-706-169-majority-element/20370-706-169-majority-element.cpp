// Method 2: Hashing
// TC: O(N)
// SC: O(N)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int n = nums.size();
        for(auto n : nums){
            count[n]++;
        }

        for(auto x : count){
            if(x.second > n/2){
                return x.first;
            }
        }
        return -1;
    }
};