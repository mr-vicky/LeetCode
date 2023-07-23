class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n=words.size();
        vector<string>res;
        for(int i=0; i<n; i++){
            string temp="";
            for(int j=0; j<words[i].size(); j++){
                
                if(words[i][j]!=separator)
                {
                    temp+=words[i][j];  
                }
                else{
                    if(!temp.empty()){
                        res.push_back(temp);
                    }
                    temp="";
                }
            }
            if(!temp.empty())
                res.push_back(temp);
            
        }
        
        return res;
    }
};