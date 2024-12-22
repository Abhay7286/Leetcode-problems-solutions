// kadane algorithm
// Time Complexity: O(n^2)
// space complexity: O(1)

#include <limits.h>

int maxSubArray(int* nums, int numsSize) {
    int MaxSum = INT_MIN;
    int curSum = 0;
    
    for(int i = 0; i<numsSize; i++){
        curSum += nums[i];
        if(curSum>MaxSum){
            MaxSum = curSum;
        }
        if(curSum<0){
            curSum = 0;
        }
    }
    return MaxSum;

}