// TC: O(N)
// SC: O(N)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        for(auto n : nums){
            if(n != val){
                res.push_back(n);
            }
        }
        nums = res;
        return res.size();
    }
};