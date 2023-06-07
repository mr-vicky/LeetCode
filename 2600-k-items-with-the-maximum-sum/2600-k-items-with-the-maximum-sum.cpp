class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int max_sum = 0;
        vector<int>v;

        while(numOnes--){
            v.push_back(1);
        }
        while(numZeros--){
            v.push_back(0);
        }
        while(numNegOnes--){
            v.push_back(-1);
        }

        for(int i=0; i<k; i++){
            max_sum += v[i]; 
        }
        return max_sum;
    }
};