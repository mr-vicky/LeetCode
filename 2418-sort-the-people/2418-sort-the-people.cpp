// TC: O(n(log(n)))
// SC: O(n)
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<int, string>>vect;
        vector<string>res;
        
        for(int i=0; i<n; i++)
            vect.push_back( make_pair(heights[i], names[i]) );
        
        sort(vect.begin(), vect.end());
        for(int i=0; i<n; i++)
            res.push_back(vect[i].second);
        
        reverse(res.begin(), res.end());
        return res;
    }
};