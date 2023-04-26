class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        for(int i=0; i<n; i++)
            if(haystack.find(needle, i)==i)
                return i;
        return -1;
    }
};