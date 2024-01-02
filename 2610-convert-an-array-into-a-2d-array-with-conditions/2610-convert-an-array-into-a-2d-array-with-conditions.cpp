class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>freq;
        vector<vector<int>>res;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxi = 0;
        for(auto x: freq){
            maxi = max(maxi, x.second);
        }

        for(auto x: freq) cout << x.first << " " << x.second << endl;
        cout << endl;
        for(int i = 0; i < maxi; i++){
            vector<int>temp;
            for(auto& x:freq){
                if(x.second>0){
                    temp.push_back(x.first);
                    x.second--;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};