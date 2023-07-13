class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>integers;
        for(int i=0; i<2001; i++){
            if(find(arr.begin(), arr.end(), i)==arr.end()){
                integers.push_back(i);
            }
        }
        return integers[k];
    }
};