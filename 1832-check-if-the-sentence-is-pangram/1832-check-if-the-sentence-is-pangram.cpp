class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, int>mp;

        for(int i=97; i<=122; i++)
            mp[i]=0;

        for(auto x: sentence)
            mp[x]++;

        for(auto x: mp)
            if(x.second==0)
                return false;
        return true;
    }
};