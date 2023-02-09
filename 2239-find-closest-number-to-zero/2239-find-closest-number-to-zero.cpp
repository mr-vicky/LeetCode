class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;

        int small_p = 100001;
        int small_n = 100001;
        int temp1 = -100001;
        int temp2 = -100001;

        sort(nums.begin(), nums.end());
        for(auto x : nums)
            cout<<x<<" ";

        for(int i=0; i<size(nums); i++)
        {   
             if(nums[i]>=0)
                pos.push_back(nums[i]);
            else 
                neg.push_back(nums[i]);
        }
        
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end(), greater<int>());

        for(auto x: pos)
        {
            if(small_p>abs(x))
            {
                temp1=x;
                small_p=abs(x);
            }
        }

        for(auto x: neg)
        {
            if(small_n>abs(x))
            {
                temp2=x;
                small_n=abs(x);
            }
        }
        
        if(abs(temp1)==abs(temp2)) return max(temp1, temp2);
        else if(abs(temp1)>abs(temp2)) return temp2;
        else return temp1;
    }
};