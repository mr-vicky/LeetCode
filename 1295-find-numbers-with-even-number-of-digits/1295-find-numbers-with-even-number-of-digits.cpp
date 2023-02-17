class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<size(nums); i++)
        {
            int temp = 0;
            while(nums[i]>0)
            {
                nums[i]/=10;
                temp++;
            }
            if(temp%2==0) count++;
        }
        return count;
    }
};