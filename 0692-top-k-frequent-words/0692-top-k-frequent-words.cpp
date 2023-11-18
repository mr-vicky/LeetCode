class Solution {
public:
        bool compare(pair<string, int>p1, pair<string, int>p2){
            if(p1.second == p2.second){
                return p1.first < p2.first;
            }
            return p1.second > p2.second;
        }

    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        vector<string>res;
        unordered_map<string, int>mp;
        for(int i = 0; i < n; i++){
            mp[words[i]]++;
        }

        vector<pair<string, int>>freq_arr(mp.begin(), mp.end());
        sort(freq_arr.begin(), freq_arr.end(), [this](pair<string, int>p1, pair<string, int>p2){
            return compare(p1, p2);
        });

        for(auto x: freq_arr){
            k--;
            res.push_back(x.first);
            if(k == 0) return res;
        }
        return res;
    }
};