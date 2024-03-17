class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        int n = chars.size();
        if(n == 1)  return chars.size();

        int count = 1;
        for(int i = 0; i < n; i++){
            if(i == n - 1 || chars[i] != chars[i + 1]){
                res += chars[i];
                if(count > 1){
                    res += to_string(count);
                    count = 1;
                }
            }
            else{
                count++;
            }
        }
        for(int i = 0; i < res.size(); i++){
            chars[i] = res[i];
        }
        return res.size();
    }
};