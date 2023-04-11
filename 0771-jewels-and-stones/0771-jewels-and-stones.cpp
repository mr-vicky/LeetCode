class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        int n = jewels.length();
        int m = stones.length();
    
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(jewels[i] == stones[j])
                    count++;
        return count;
    }
};