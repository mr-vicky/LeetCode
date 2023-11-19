class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.size();
        int n2 = s2.size();
        int n3 = s3.size();
        string s;
        int n = 0;
        if(n1 < n2 && n1 < n3){
            s = s1;
            n = n1;
        }
        else if(n2 < n1 && n2 < n3){
            s = s2;
            n = n2;
        }
        else{
            s = s3;
            n = n3;
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != s1[i] || s[i] != s2[i] || s[i] != s3[i]){
               break;
            }
            else{
                count++;
            }
        }
        
        int res = 0;
        if(count > 0){
            res = abs(count - n1) + abs(count - n2) + abs(count - n3);
        }
        else{
            return -1;
        }
        
        return res;
    }
};