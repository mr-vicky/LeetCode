class Solution {
public:
    string generateTheString(int n) {
        string res="";
        int temp=0;

        if(n==1){
            res+='a';
        }
        else if(n==2){
            res+='a';
            res+='b';
        }
        else if(n%2==0){
            temp = n-1;
            while(temp--){
                res+='a';
            }
            res+='b';
        }
        else {
            temp = n-2;
            while(temp--){
                res+='a';
            }
            res+='b';
            res+='c';
        }
        return res;
    }
};