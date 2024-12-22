#include <limits.h>
// Time Complexity: O(n^2)
// space complexity: O(1)
int maxProduct(int *nums, int numsSize)
{
    int maxProd = INT_MIN;
    for (int i = 0; i < numsSize; i++)
    {
        int product = 1;
        for (int j = i; j < numsSize; j++)
        {
            product *= nums[j];
            if (product > maxProd)
            {
                maxProd = product;
            }
        }
    }
    return maxProd;
}


