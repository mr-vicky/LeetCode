class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
        vector<int>v(num.begin(), num.end());

        int i = n-1;
        while(v[i]==48){
            v.pop_back();
            i--;
        }
        string res(v.begin(), v.end());
        return res;
    }
};