class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.length();
        int m = t.length();
        int res = m;

        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if(s[i] == t[j]){
                res--;
                i++;
                j++;
            }
            else if(s[i] !=  t[j]){
                i++;
            }
        }
        return res;
    }
};