class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int res = 0;
        
        if(n == 0) return true;
        for(int i = 0; i < size; i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == size-1 || flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                res++;
                if(res == n) return true;
            }
        }
        return false;
    }
};