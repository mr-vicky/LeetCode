class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>res;
        
        for(int i=0; i<n; i++)
        {
            int j=i+1, k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0 && (i!=j && i!=k && j!=k))
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else 
                    k--;
            }
        }
        
        for(auto x: s)
            res.push_back(x);
            
        return res;
    }
};