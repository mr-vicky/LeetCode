class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>m;
        vector<int>v;

        for(auto x: arr)
            m[x]++;

        for(auto x: m)
            v.push_back(x.second);

        set<int>s(v.begin(), v.end());
        return s.size()==v.size();
    }

};