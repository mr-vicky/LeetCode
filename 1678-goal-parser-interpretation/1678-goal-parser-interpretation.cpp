class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        vector<char>res;

        for(int i=0; i<n; i++){
            if(command[i]=='G') 
                res.push_back('G');

            if(command[i]=='(' && command[i+1]==')' && i<n-1){
                res.push_back('o');
                i+=1;
            }

            if(command[i]=='(' && command[i+1]=='a' && 
               command[i+2]=='l' && command[i+3]==')' && i<n-3){
                res.push_back('a');
                res.push_back('l');
                i+=3;
            }
        }
        string s(res.begin(), res.end());
        return s;
    }
};