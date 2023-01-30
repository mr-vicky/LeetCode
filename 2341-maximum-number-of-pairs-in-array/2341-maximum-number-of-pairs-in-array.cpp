class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int>mp;
        for(auto x: nums)
            mp[x]++;
            
        int counter1=0; 
        int counter2=0;

        for(auto x: mp )
        {
            counter1=counter1 + (x.second/2);
            counter2= counter2 + (x.second%2);
        } 
        return {counter1, counter2};
    }
};