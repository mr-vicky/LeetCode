class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.size();
        int m = s.length();
        string res = "";

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(order[i] == s[j]){
                    res += s[j];
                }
            }
        }

        for(int i = 0; i < s.size(); i++){
            bool flag = false;
            for(int j = 0; j < order.size(); j++){
                if(s[i] == order[j]){
                   flag = true;
                   break; 
                }
            }
            if(flag == false){
                res+= s[i];
            }
        }

        return res;
    }
};