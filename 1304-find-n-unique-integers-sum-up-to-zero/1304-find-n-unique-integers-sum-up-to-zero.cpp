class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;

        if(n==1){
            res.push_back(0);
            return res;
        }

        if(n%2!=0){
            res.push_back(0);
        }

        for(int i=1; i<=n/2; i++){
            res.push_back(i);
            res.push_back(i*(-1));
        }
        return res;
    }
};

// 1: 0
// 2: -1 -1
// 3: -1 0 -1
// 4: -2 -1 1 2 
// 5: -2 -1 0 1 2 
// 6: -3 -2 -1 1 2 3 