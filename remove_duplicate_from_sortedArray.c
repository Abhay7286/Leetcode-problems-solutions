int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
        return 0; // Handle edge case

    int k = 1; // Initialize k for the new array's length

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[k - 1]) // Check if the current number is different
        {                      
            nums[k] = nums[i]; // Place the unique number at index k
            k++;               // Increment k for the next unique position
        }
    }

    return k; // Return the new length
}
