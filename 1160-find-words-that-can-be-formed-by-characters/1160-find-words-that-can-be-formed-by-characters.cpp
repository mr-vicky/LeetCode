class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      unordered_map<char, int>ump;
      unordered_map<char, int>refill;
      int res  = 0;

      for(int i = 'a'; i <= 'z'; i++) ump[i] = 0;
      for(auto it: chars) ump[it]++;
      refill = ump;

      for(int i = 0; i < words.size(); i++){
          bool flag = true;
          for(int j = 0; j < words[i].size(); j++){
              if(ump[words[i][j]] == 0){
                  flag = false;
                  break;
              }
              else{
                  ump[words[i][j]]--;
              }
          }
          ump = refill;
          if(flag == true){
            res += words[i].length();
          }
      }
      return res;
    }
};