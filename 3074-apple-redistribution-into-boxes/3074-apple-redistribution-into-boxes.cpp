class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int total_capacity = 0;
        int count = 0;

        sort(capacity.begin(), capacity.end(), greater<int>());
        int total_apples = 0;
        for(int i = 0; i < n; i++){
            total_apples += apple[i];
        }
        for(int i = 0; i < m; i++){
            if(total_capacity >= total_apples){
                break;
            }
            else{
                total_capacity += capacity[i];
                count++;
            }
        }
        return count;
    }
};