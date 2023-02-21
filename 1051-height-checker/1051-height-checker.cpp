class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        v = heights;
        int count = 0;
        sort(heights.begin(), heights.end());
        
        for(int i=0; i<v.size(); i++)
            if(v[i]!=heights[i])    count++;
        return count;
    }
};