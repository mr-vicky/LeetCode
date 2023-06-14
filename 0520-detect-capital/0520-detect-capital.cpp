class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                count++;
            }
            if(count==n) return true;
        }
        
        if(word[0] >= 'A' && word[0] <= 'Z')
        {
            int count = 0;
            for(int i=1; i<n; i++){
                if(word[i] >= 97 && word[i] <= 122){
                    count++;
                }
            }
            if(count==n-1) return true;
        }
        else{
            int count = 0;
            for(int i=0; i<n; i++){
                if(word[i] >= 97 && word[i] <= 122){
                    count++;
                }
                if(count==n) return true;
                    
            }
        }

        return false;
    }
};