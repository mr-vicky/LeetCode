// TC: O(k)
// SC: O(k), where k = number of digits in the given integer
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>nums;
        int sum=0;
        while(n>0)
        {
            nums.push_back(n%10);
            n/=10;
        }
        reverse(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
                sum+=nums[i];
            else 
                sum-=nums[i];
        }
        
        return sum;
    }
};