class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i=0, j=n-1;
        vector<int>res;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]<target)
                i++;
            else if(numbers[i]+numbers[j]>target)
                j--;
        }
        for(auto x: res)
            cout<<x<<" ";
        return res;
    }
};