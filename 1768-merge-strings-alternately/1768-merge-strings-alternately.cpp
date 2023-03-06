// TC: O(m+n)
// SC: O(m+n)
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char>temp;
        int m = word1.size();
        int n = word2.size();
        int ans_length =  m + n;

        int i=0, j=0;
        while(temp.size()<ans_length)
        {
            if(i<m)
            {
                temp.push_back(word1[i]);
                i++;
            }
            if(j<n)
            {
                temp.push_back(word2[j]);
                j++;
            }
        }
        string ans(temp.begin(), temp.end());
        return ans;
    }
};