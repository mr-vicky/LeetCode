class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>st(s.begin(), s.end());
        return st.size();
    }
};