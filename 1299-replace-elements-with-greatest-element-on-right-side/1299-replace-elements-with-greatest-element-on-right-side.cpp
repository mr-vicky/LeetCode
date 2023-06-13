class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = arr[n-1];
        vector<int>res;
        res.push_back(-1);

        if(n>=2){
            res.push_back(arr[n-1]);
        }

        for(int i=n-2; i>0; i--){
            if(arr[i] < max){
                res.push_back(max);
            }
            else{
                max = arr[i];
                res.push_back(max);
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};