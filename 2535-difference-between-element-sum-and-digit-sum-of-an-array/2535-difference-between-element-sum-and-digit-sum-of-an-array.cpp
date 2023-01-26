// TC: O(n*log(n))
// SC: O(n)
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        vector<int>digits;
        int n = nums.size();

        for(int i =0; i<n; i++)
        {
            if(nums[i]<=9)
            {
                digits.push_back(nums[i]);
            }
            
            if(nums[i]>9)
            {
                int num = nums[i];
                while(num>9)
                {
                    int temp=num%10;
                    digits.push_back(temp);
                    num=num/10;

                    if(num<=9)
                        digits.push_back(num);
                }
            }
        }
        
        int sum_nums = accumulate(nums.begin(), nums.end(), 0);
        int digits_sum = accumulate(digits.begin(), digits.end(), 0);
        return abs(sum_nums-digits_sum);
    }
};