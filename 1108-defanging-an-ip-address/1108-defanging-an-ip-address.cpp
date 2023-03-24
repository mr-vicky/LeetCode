class Solution {
public:
    string defangIPaddr(string address) {
        vector<char>ans;
        for(int i=0; i<address.length(); i++)
        {
            if(address[i]=='.')
            {
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
                continue;
            }
                ans.push_back(address[i]);
        }
        string s(ans.begin(), ans.end());
        return s;
    }
};