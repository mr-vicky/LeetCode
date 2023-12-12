// TC: O(n)
// SC: O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;
        for(auto x: nums){
            if(x > max1)
                max2 = exchange(max1, x);
            else 
                max2 = max(max2, x);
        }
        return (max1 - 1) * (max2 - 1);
    }

};