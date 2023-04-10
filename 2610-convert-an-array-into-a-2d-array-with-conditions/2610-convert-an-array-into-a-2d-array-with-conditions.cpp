class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int>mp;
        int max_rows=0;

        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;

        for(auto &[element, freq]: mp)
            max_rows = max(max_rows, freq);

        vector<vector<int>>ans(max_rows);

        for(auto &[element, freq]: mp)
            for(int i=0; i<freq; i++)
                ans[i].push_back(element);

        return ans;
    }
};
