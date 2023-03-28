class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>mp1;
        map<char, int>mp2;
        int n1 = ransomNote.length();
        int n2 = magazine.length();
        int count = 0;

        for(int i=0; i<n1; i++)
            mp1[ransomNote[i]]++;

        for(int i=0; i<n2; i++)
            mp2[magazine[i]]++;

        int size = mp1.size();
        for(auto x: mp1)
            for(auto y: mp2)
                if(x.first==y.first)
                    if(x.second<=y.second)
                        count++;
                                         
        return size==count;
    }
};