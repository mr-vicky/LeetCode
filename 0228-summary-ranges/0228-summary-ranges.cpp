class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        int n = nums.size();
        vector<string>res;
        int start = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1] + 1){
                if(start == nums[i-1]){
                    res.push_back(to_string(start));
                }
                else{
                    res.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                }
                start = nums[i];
            }
        }
        
        if(start == nums[n-1]){
            res.push_back(to_string(start));
        }
        else{
            res.push_back(to_string(start) + "->" + to_string(nums[n-1]));
        }
        return res;
    }
};