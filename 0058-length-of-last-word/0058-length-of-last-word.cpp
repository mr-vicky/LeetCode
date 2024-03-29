// TC: O(N)
// SC: O(1)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.length();
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]!=' ')
                count++;
            if(count>0 && s[i]==' ')
                break;
        }
        return count;
    }
};