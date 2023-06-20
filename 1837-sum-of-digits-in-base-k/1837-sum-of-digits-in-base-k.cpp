class Solution {
public:
    int sumBase(int n, int k) {
        vector<int>v;
        while(n!=0){
            v.push_back(n%k);
            n /= k;
        }
        v.push_back(n);
        int sum = 0;
        for(auto x : v) sum+=x;
        return sum;
    }
};