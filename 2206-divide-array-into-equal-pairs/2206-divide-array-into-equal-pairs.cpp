// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int res=nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            int count=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                    count++;
            }
            if(count%2!=0)
                return false;
        }

        return true;
    }
};