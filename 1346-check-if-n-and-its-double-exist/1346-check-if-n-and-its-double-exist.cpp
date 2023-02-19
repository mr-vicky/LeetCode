// TC: O(n*n)
// SC: O(1)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int>pos;
        vector<int>neg;

        for(auto x: arr)
        {
            if(x>0) pos.push_back(x);
            else neg.push_back(x);
        }

        sort(pos.begin(), pos.end(), greater<int>());
        for(int i=0; i<pos.size(); i++)
            for(int j=i+1; j<pos.size(); j++)
                if(pos[i]==2*pos[j]) return true;

        sort(neg.begin(), neg.end());
        for(int i=0; i<neg.size(); i++)
            for(int j=i+1; j<neg.size(); j++)
                if(neg[i]==2*neg[j]) return true;

        return false;
    }
};