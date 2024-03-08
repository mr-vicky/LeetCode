// TC: O(n)
// SC: O(n)
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>freq;
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }

        int max_freq = 0;
        for(auto x: freq){
            max_freq = max(max_freq, x.second);
        }

        int res = 0;
        for(auto x: freq){
            if(x.second == max_freq){
                res++;
            }
        }
        return res*max_freq;
    }
};