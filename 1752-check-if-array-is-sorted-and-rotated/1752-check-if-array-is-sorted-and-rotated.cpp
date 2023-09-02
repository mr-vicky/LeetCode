class Solution {
public:
    bool check(vector<int>& A) {
        int n = A.size();
        int k = 0;
        for(int i = 0; i < n; i++){
            if(A[i] > A[(i+1)%n] && k++ > 0){ 
                return false;
            }
        }
        return true;
    }
};