// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(max < (nums[i]-1)*(nums[j]-1))
                    max = (nums[i]-1)*(nums[j]-1);
            }
        }
        return max;
    }
};