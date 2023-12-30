class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int>freq;
        int count = 0;
        for(int i = 0; i < n; i++){
            count++;
            for(int j = 0; j < words[i].size(); j++){
                freq[words[i][j]]++;
            }
        }

        for(auto x: freq){
            if(x.second % count != 0)
                return false;
        }
        return true;
    }
};