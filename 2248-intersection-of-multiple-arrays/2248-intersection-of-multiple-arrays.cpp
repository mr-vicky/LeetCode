class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int>mp;
        vector<int>res;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                mp[(nums[i][j])]++;
            }
        }

        for(auto x: mp){
            if(x.second==nums.size()){
                res.push_back(x.first);
            }
        }
        return res;
    }
};