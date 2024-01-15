class Solution {
public:
    string customSortString(string order, string s) {
        string res = "";
        int n = order.length();
        int i = 0;
        for(int i = 0; i < order.length(); i++){
            for(int j = 0; j < s.length(); j++){
                if(order[i] == s[j]){
                    res += s[j];
                    s[j] = '0';
                }
            }
        }
        for(auto x: s)
            if(x != '0')
                res += x;
        return res;
    }
};