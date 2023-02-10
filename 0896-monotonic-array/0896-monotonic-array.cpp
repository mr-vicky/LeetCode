// TC: O(n(log(n)))
// SC: O(n)
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>v(nums.begin(), nums.end());
        
        sort(v.begin(), v.end());
        if(v == nums) return true;

        sort(v.begin(), v.end(), greater<int>());
        if(v == nums) return true;

        return false;
    }
};