// Solved Using Stack 
// TC: O(1)
class Solution {
public:
    bool isValid(string s) {
        stack<int>st;

        for(auto c: s){
            if(c == '{' || c == '[' || c == '('){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                else if(c == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(c == ']' && st.top() == '['){
                    st.pop();
                }
                else if(c == ')' && st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (st.empty())? true:false;
    }
};