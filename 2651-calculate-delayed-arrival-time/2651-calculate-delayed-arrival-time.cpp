class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum = arrivalTime + delayedTime;
        if(sum < 24)
            return sum;
        else if(sum > 24)
            return sum - 24;
        else if(sum == 24)
            return 0;
        return -1;
    }
};

