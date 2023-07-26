class Solution {
public:
    int getLucky(string s, int k) {
        vector<int>v;
        int n=s.length();
        
        for(int i=0; i<n; i++){
            int temp=s[i]-96;
            while(temp>0){
                v.push_back(temp%10);
                temp/=10;
            }
        }

        int num=0;
        int res=0;
        while(k--){
            for(int i=0; i<v.size(); i++){
                num+=v[i];
            }
            res=num;
            v.clear();
            while(num>0){
                v.push_back(num%10);
                num/=10;
            }
        }
        return res;
    }
};