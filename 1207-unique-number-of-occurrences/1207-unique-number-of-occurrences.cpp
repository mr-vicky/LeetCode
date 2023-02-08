class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s(arr.begin(), arr.end());
        vector<int>ans;
        
        for(auto x : s)
        {
            int counts = 0;
            counts = count(arr.begin(), arr.end(), x);
            ans.push_back(counts);
        }

        for(auto x: ans)
            if(count(ans.begin(), ans.end(), x)>1)
                return false;

        return true;
    }

};