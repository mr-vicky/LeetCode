class Solution {
public:
    int countDigits(int num) {
        vector<int>v;
        int count=0;
        int temp = num;

        while(num>0)
        {
            v.push_back(num%10);
            num/=10;
        }
        
        for(auto x: v)
            if(temp%x==0)    count++;
        return count;
    }
};