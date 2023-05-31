class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        int odd_cost = 0, even_cost = 0;

        for(int i=0; i<n; i++){
            if(position[i]%2==0){
                odd_cost++;
            }
            else if(position[i]%2==1){
                even_cost++;
            }
        }
        return min(even_cost, odd_cost);
    }
};

