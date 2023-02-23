// TC: n(log(n))
// SC: O(1)
class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        
        if(n<=2)    return 0;

        int first = nums[0];
        for(auto x: nums)
            if(x==first)
                count++;

        int last = nums[n-1];
        for(auto x: nums)
            if(x==last)
                count++;
        
        if(first==last) return 0;
        
        return n-count;
    }
};