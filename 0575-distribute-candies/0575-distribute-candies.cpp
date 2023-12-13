class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int>st(candyType.begin(), candyType.end());
        int types = st.size();
        if(types >= n/2)
            return n/2;
        else 
            return types;
    }
};