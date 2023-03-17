class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.length();
        while(j<n)
        {
            if(s[j+1]==' ')
            {
                reverse(s.begin()+i, s.begin()+j+1);
                i = j+2;
            }
            j++;

            if(j==n-1)
                reverse(s.begin()+i, s.end());
        }
        return s;
    }
};