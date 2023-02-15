class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0; i<size(nums); i++)
            for(int j=0;j<size(nums); j++)
                if(nums[i]-nums[j]==k)
                    count++;
        return count;
    }
};