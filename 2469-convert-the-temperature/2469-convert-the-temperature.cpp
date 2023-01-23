// TC: O(1)
// SC: O(1)
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
      vector<double>ans;
      double kel_temp=0;
      double fahr_temp=0;
      
      kel_temp = celsius + 273.15;
      fahr_temp= (celsius * 1.80) + 32.00;

      ans.push_back(kel_temp);
      ans.push_back(fahr_temp);

      return ans;
    }
};