#include <stdio.h>
#include <stdbool.h>

bool canBallReach(int nums[], int n)
{
    int maxReach = 0;

    for (int i = 0; i < n; i++)
    {
        // If current position cannot be reached
        if (i > maxReach)
        {
            return false;
        }

        // Update the farthest position we can reach
        if (i + nums[i] > maxReach)
        {
            maxReach = i + nums[i];
        }

        // If we can reach the last position
        if (maxReach >= n - 1)
        {
            return true;
        }
    }

    return true;
}

int main()
{
    int nums[] = {2, 3, 4, 1, 1, 4};

    int n = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", canBallReach(nums, n));

    return 0;
}