class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int res = 0;

        for(int i = 0; i < n - 1; i++){
            int cnt1 = 0, cnt0 = 0;
            for(int j = 0; j < n; j++){
                if(s[j] == '0' && j <= i)
                    cnt0++;
                if(s[j] == '1' && j > i)
                    cnt1++;
            }
            res = max(res, cnt0 + cnt1);
        }
        return res;
    }
};