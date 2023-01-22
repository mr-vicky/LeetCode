// TC: O(n)
// SC: O(1)
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        arr.push_back(pref[0]);
        for(int i=0; i<pref.size()-1; i++)
        {
            int temp = pref[i]^pref[i+1];
            arr.push_back(temp);
        }
        
        return arr;
    }
};