// TC: O(n*(log(n)))
// SC: O(n)
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int, int>mp;
        vector<int>v;
        int count = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++)
            mp[arr[i]] = mp[arr[i]]+1;

        for(auto x: mp) 
            v.push_back(x.second);
        
        sort(v.begin(), v.end(), greater<int>());

        for(auto x: v)
        {
            sum += x;
            count++;
            if(sum>=n/2)
                return count;
        }
        return 0;
    }
};