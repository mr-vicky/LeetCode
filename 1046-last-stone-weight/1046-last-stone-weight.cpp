class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int>v;
        sort(stones.begin(), stones.end());

        for(int i=0; i<stones.size(); i++)
        {
            if(i==stones.size()-2)
            {
                v.push_back(abs(stones[i]-stones[i+1]));
                break;
            }
            else 
                v.push_back(stones[i]);
        }

        if(v.size()==1)
            return v[0];
        else if(v.size()==0)
            return 0;
        else 
        {
            stones=v;
            return lastStoneWeight(stones);
        }
    }
};