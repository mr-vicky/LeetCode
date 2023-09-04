// Method 2: Recursive Approach
// TC: O(m+n)
// SC: O(m+n)

class Solution {
    int totalSubsequenceChar(string &s, string &t, int m, int n){
        if(m==0 || n==0)
            return false;
        if(s[m-1]==t[n-1])
            return 1+totalSubsequenceChar(s, t, m-1, n-1);
        else
            return totalSubsequenceChar(s, t, m, n-1);
    }

public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        
        if(totalSubsequenceChar(s, t,  m, n)==m)
            return true;
        else
            return false;
    }
};