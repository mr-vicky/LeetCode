// TC: O(N*M(logM))
// SC: O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1){
            return strs[0];
        }

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int n = min(first.length(), last.length());

        string res = "";
        for(int i = 0; i < n; i++){
            if(first[i] == last[i]){
                res += first[i];
            }
            else{
                return res;
            }
        }
        return res;
    }
};