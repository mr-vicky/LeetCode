class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(s.find(nums[i] - 1) != s.end())
                continue;
            else{
                int count = 0;
                int curr_ele = nums[i];
                while(s.find(curr_ele) != s.end()){
                    count++;
                    curr_ele++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};