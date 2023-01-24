// TC: O(n)
// SC: O(1)
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = 100000;
        int g = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(s>nums[i])
                s=nums[i];

            if(g<nums[i])
                g=nums[i];
        }

        for(int i=s; i>0; i--)
        {
            if((s%i==0) && (g%i==0))
                return i;
        }
        return 1;
    }
};