class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        map<char, int>freq;
        for(int i = 0; i < n; i++){
            freq[s[i]]++;
        }
        for(int i = 0; i < n; i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};