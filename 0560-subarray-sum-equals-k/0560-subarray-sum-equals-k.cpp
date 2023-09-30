// TC: O(n*log(n))
// SC: O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int prefix_sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            prefix_sum += nums[i];
            int remove = prefix_sum - k;
            count += mp[remove];
            mp[prefix_sum] += 1;
        }
        return count;
    }
};