// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        int n = encoded.size();
        v.push_back(first);
        int temp = first;
        for(int i=0; i<n; i++)
        {
            temp ^= encoded[i];
            v.push_back(temp);
        }
        return v;
    }
};