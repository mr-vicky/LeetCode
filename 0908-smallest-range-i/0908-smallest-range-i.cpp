class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int small = INT_MAX;
        int large = INT_MIN;
        for(auto x: nums){
            small = min(small, x);
            large = max(large, x);
        }
        return max(0, (large - k) - (small + k));
    }
};