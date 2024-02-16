class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        map<int, int>freq;
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        if(k == n) return 0;

        for(int i = 1; i < n; i++){
            for(auto &x: freq){
                if(x.second == i){
                    if(k >= i){
                        k-=i;
                        x.second-=i;
                    }
                    else if(k != 0){
                        k--;
                        x.second--;
                    }
                }
                if(k == 0){
                    break;
                }
            }
        }
        int count = 0;
        for(auto x: freq){
            if(x.second > 0){
                count++;
            }
        }
        return count;
    }
};