class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int>w1;
        map<string, int>w2;
        int m = words1.size();
        int n = words2.size();
        int count = 0;

        for(int i=0; i<m; i++)
            w1[words1[i]]++;

        for(int i=0; i<n; i++)
            w2[words2[i]]++;

        for(auto x: w1)
            for(auto y: w2)
                if(x.first==y.first)
                    if(x.second== 1 && 1 == y.second)
                        count++;
        return count;
    }
};