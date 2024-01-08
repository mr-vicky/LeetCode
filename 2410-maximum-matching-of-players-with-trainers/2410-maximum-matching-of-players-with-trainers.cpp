class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int i = 0, j = 0;
        int res = 0;
        sort(players.begin(), players.end(), greater<int>());
        sort(trainers.begin(), trainers.end(), greater<int>());
        
        while(i < players.size() && j < trainers.size()){
            if(players[i] > trainers[j]){
                i++;
            }
            else {
                res++;
                i++;
                j++;
            }
        }
        return res;
    }
};