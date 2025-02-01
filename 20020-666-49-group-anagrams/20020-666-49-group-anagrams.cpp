// Method: Hashing & sorting
// TC: O(M*(NlogN))
// SC: O(M)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;

        for(auto& s : strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            group[sortedS].push_back(s);
        }

        vector<vector<string>> res;
        for(auto& g : group){
            res.push_back(g.second);
        }
        return res;
    }
};