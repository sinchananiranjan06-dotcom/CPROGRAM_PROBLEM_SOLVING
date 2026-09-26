#include <stdio.h>

int minJumps(int nums[], int n)
{
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (i + nums[i] > farthest)
        {
            farthest = i + nums[i];
        }

        if (i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;
        }
    }

    return jumps;
}

int main()
{
    int nums[] = {2, 3, 1, 1, 4};

    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Minimum jumps: %d\n", minJumps(nums, n));

    return 0;
}