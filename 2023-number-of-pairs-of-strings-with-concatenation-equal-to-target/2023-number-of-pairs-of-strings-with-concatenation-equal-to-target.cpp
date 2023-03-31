class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int count_pairs=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(nums[i]+nums[j]==target && (i!=j))
                    count_pairs++;
        return count_pairs;
    }
};