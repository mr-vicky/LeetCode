class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int it=1;
        while(n>=0){
            if(n>=it){
                n-=it;
                it++;
                count++;
            }else{
                break;
            }
        }      
        return count;
    }
};