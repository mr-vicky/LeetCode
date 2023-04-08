class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> digits;
        for (int i = left; i <= right; i++)
         {
            vector<int> temp;
            int count_digits = 0;
            int num = i;
            while (num > 0) 
            {
                temp.push_back(num % 10);
                num /= 10;                
            }

            for(int j = 0; j < temp.size(); j++) 
                if (temp[j] != 0)
                    if(i % temp[j] == 0)
                        count_digits++;

            if (count_digits == temp.size())
                digits.push_back(i);
        }
        return digits;
    }
};
