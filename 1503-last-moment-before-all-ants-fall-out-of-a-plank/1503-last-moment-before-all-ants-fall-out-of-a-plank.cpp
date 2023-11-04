class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int max_left = 0;
        int max_right = 0;

        for(auto x: left){
            max_left = max(max_left, x);
        }
        cout << endl;

        for(auto x: right){
            max_right = max(max_right, n - x);
        }
        
        return max(max_left, max_right);
    }
};