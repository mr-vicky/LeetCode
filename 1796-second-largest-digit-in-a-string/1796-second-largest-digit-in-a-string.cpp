class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 48 && s[i] <= 57 ){
                st.insert(s[i]-'0');
            }
        }
        vector<int>v(st.begin(), st.end());

        if(v.size() <= 1) return -1;
        return v[v.size()-2];
    }
};