class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>even;
        map<int, int>freq;
        int max_freq = 0;
        int res = -1;

        for(auto x: nums){
            if(x%2 == 0){
                even.push_back(x);
            }
        }
        for(int i = 0; i < even.size(); i++){
            freq[even[i]]++;
        }
        for(auto x: freq){
            max_freq = max(max_freq, x.second);
        }
        for(auto x: freq){
            if(x.second == max_freq){
                res = x.first;
                break;
            }
        }
        return res;
    }
};