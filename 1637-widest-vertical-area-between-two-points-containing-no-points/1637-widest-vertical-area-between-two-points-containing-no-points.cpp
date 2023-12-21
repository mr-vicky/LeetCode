class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>x;
        int max_width = 0;

        for(int i = 0; i < points.size(); i++)
            x.push_back(points[i][0]);
        sort(x.begin(), x.end());

        for(int i = 1; i < x.size(); i++)
            max_width = max(max_width, abs(x[i] - x[i-1]));
        return max_width;
    }
};