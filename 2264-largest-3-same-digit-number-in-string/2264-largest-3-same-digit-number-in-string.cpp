class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int>temp;
        int n = num.size();

        for(int i=0; i<n-2; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                temp.push_back(num[i] - '0');
                temp.push_back(num[i] - '0');
                temp.push_back(num[i] - '0');
                i+=2;
            }    
        }

        sort(temp.begin(), temp.end(), greater<int>());
        int m = temp.size();
        
        if(temp.empty()){
            return "";
        }
        else{
            string res;
            res.push_back(temp[0]+'0');
            res.push_back(temp[0]+'0');
            res.push_back(temp[0]+'0');
            return res;
        }
    }
};