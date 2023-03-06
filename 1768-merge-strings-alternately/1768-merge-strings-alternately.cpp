class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char>ans;
        int n=word1.length()+word2.length();
        int l1=word1.length();
        int l2=word2.length();

        if(l1<l2)
        {
            for(int i=0; i<l1; i++)
            {
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }

            int i=l1;
            while(ans.size()<n)
            {
                ans.push_back(word2[i]);
                i++;
            }
        }
        else{

            for(int i=0; i<l2; i++)
            {
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }

            int i=l2;
            while(ans.size()<n)
            {
                ans.push_back(word1[i]);
                i++;
            }
        }

        string res(ans.begin(), ans.end());
        return res;
        
    }
};