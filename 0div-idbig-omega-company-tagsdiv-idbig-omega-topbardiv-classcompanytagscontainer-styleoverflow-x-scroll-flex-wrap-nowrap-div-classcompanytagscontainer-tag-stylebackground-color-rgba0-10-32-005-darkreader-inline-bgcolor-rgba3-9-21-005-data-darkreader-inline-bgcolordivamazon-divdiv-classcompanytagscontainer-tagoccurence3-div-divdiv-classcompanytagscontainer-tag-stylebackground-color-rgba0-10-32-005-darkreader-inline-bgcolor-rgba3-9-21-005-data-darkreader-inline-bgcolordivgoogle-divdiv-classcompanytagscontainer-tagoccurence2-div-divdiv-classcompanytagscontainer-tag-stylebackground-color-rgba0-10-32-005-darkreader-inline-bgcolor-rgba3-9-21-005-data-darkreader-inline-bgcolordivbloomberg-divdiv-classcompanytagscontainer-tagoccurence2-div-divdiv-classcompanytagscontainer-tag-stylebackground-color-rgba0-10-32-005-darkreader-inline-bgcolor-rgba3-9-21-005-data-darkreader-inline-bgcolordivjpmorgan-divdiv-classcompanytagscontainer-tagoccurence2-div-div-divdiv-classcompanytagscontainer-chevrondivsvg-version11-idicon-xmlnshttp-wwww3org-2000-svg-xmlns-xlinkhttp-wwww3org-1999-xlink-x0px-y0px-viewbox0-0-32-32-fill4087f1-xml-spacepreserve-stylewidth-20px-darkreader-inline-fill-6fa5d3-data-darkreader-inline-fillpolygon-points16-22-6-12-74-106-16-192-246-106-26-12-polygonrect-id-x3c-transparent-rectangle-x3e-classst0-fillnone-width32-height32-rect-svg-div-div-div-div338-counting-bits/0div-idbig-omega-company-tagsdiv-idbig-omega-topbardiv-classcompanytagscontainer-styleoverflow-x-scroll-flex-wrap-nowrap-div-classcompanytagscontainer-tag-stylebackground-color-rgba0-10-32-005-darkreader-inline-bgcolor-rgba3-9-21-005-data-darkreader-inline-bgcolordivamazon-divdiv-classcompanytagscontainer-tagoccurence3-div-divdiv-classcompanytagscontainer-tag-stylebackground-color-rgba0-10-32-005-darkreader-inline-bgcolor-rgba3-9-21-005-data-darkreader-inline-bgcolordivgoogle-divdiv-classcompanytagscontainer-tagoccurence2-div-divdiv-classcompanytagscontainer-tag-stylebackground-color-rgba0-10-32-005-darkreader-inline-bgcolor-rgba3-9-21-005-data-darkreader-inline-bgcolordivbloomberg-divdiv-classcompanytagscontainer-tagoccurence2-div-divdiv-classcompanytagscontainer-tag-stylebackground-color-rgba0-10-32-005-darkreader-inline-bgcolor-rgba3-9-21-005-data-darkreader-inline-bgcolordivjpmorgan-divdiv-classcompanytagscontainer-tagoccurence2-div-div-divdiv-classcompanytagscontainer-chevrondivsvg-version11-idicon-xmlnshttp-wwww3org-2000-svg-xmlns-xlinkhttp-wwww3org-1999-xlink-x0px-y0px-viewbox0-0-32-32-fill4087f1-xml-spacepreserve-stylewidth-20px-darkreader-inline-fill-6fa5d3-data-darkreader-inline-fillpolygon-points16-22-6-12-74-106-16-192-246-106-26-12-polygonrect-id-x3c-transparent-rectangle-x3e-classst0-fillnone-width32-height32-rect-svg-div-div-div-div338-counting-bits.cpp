class Solution {
public:
    // Function to get count of set Bits
    int getSetBits(int n){
        unsigned int count = 0;
        while(n){
            count += n & 1;
            n = n >> 1;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i = 0; i <= n; i++){
            res.push_back(getSetBits(i));
        }
        return res;
    }
};