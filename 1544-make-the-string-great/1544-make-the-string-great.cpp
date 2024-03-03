class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        stack<char>stk;
        stk.push(s[0]);

        for(int i = 1; i < n; i++){
            if(!stk.empty() && (stk.top() + 32 == s[i])){
                stk.pop();
            }
            else  if(!stk.empty() && (stk.top() == s[i] + 32)){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }

        string res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};