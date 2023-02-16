class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>v;
        for(int i=0; i<s.length(); i++)
            v.push_back(count(s.begin(), s.end(), s[i]));
            
        for(int i=0; i<size(v)-1; i++)
            if(v[i]!=v[i+1]) return false;
        return true;
    }
};