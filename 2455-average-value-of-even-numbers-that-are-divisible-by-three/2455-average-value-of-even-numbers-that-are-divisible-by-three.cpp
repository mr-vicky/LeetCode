class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]%3==0 && nums[i]%2==0)
                v.push_back(nums[i]);

        int n = v.size();
        if(n==0) return 0;
        int sum = 0;

        for(int i=0; i<n; i++)
            sum+=v[i];
        return sum/n;
    }
};