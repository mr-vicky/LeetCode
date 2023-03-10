class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>m;
        vector<int>v;

        for(int i=0; i<arr.size(); i++)
            m[arr[i]]++;

        for(auto x: m)
            v.push_back(x.second);

        set<int>s(v.begin(), v.end());
        return s.size()==v.size();
    }

};