class Solution {
public:
    bool compare(pair<int, int>p1, pair<int, int>p2){
        return p1.second > p2.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == k)  return nums;

        vector<int>res;
        unordered_map<int, int>mp;

        for(int i = 0; i < n; i++)
            mp[nums[i]]++;

        vector<pair<int, int>> freq_arr(mp.begin(), mp.end());
        sort(freq_arr.begin(), freq_arr.end(), [this](pair<int, int>p1, pair<int, int>p2){
            return compare(p1, p2);
        });

        for(auto x: freq_arr){
            k--;
            res.push_back(x.first);
            if(k == 0) return res;
        }
        return res;
    }
};