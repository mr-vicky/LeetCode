// TC: O(n)
// SC: O(1)
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(auto x: nums)
        {
            if(count(nums.begin(), nums.end(), x)==1)
               sum+=x;
        }
        return sum;
    }
};