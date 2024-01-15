class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>res;
        for(int i = 0; i < n; i++){
            int curr = 0;
            for(int j = 0; j < n; j++){
                if(i != j && boxes[j] == '1'){
                    curr += abs(i - j);
                }
            }
            res.push_back(curr);
        }
        return res;
    }
};