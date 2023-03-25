class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        vector<char>v;
        int count = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
                count++;
            if(count==k)
                break;
            v.push_back(s[i]);
        }
        string ans(v.begin(), v.end());
        return ans;
    }
};