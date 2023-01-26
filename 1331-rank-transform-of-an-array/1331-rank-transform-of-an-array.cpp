class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v;
        v=arr;
        unordered_map<int, int>mp;

        sort(v.begin(), v.end());
        for(auto x: v)
        {
            mp.emplace(x, mp.size()+1);
        }
        
        for(int i=0; i<v.size(); i++)
        {
            v[i] = mp[arr[i]];
        }
        return v;
    }
};