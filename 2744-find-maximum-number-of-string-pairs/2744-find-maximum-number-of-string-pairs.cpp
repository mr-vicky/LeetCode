// TC: O(n*m*log(m))
// SC: O(1)
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            sort(words[i].begin(), words[i].end());
        }
        sort(words.begin(), words.end());

        for(int i = 0; i < n-1; i++){
            if(words[i] == words[i+1]){
                res++;
            }
        }
        return res;
    }
};