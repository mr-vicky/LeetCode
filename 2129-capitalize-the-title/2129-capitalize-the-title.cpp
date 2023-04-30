class Solution {
public:
    string capitalizeTitle(string title){
        int n = title.length();
        string temp="", res="";;

        for(int i=0; i<n; i++)
            title[i]=tolower(title[i]);
         
        for(int i=0; i<n; i++)
        {
            if(title[i]!=' ')
            {
                temp=temp+title[i];
            }
            else if(temp.size()<=2)
            {
                res= res + temp;
                res = res + " ";
                temp= "";
            } 
            else
            {
                temp[0]=toupper(temp[0]);
                res = res + temp;
                res = res + " ";
                temp= "";
            }
        }
             
        if(temp.size()<=2)
        {
            res = res + temp;
        }
        else
        {
            temp[0]=toupper(temp[0]);
            res = res + temp;
            temp = "";
        }

        return res;
    }
};