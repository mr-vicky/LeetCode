// TC: O(n^2)
// SC: O(1)
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=1;
        int n=sentences.size();
        for(int i=0; i<n; i++)
        {
            int curr_words=1;
            for(int j=0; j<sentences[i].length(); j++)
            {
                if(sentences[i][j]==' ')
                    curr_words++;

                max_words = max(max_words, curr_words);
            }
        }
        return max_words;
    }
};