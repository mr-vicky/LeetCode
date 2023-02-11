class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        
        for(int j=0; j<size(nums); j++)
        {
            int i = 0;
            for(int i=0; i<j; i++)
            {
                if(nums[j]-nums[i]==diff)
                {
                    int k = j+1;
                    while(k<nums.size())
                    {
                        if(nums[k]-nums[j]==diff)
                            count++;

                        k++;
                    }
                }
            }
        }
            return count;
    }
};