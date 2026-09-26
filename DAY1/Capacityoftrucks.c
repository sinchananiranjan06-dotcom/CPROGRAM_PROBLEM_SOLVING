#include <stdio.h>

int minSpeed(int bunches[], int n, int h)
{
    int left = 1;
    int right = bunches[0];

    // Find the largest bunch
    for (int i = 1; i < n; i++)
    {
        if (bunches[i] > right)
            right = bunches[i];
    }

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        int totalHours = 0;

        for (int i = 0; i < n; i++)
        {
            totalHours += (bunches[i] + mid - 1) / mid;
        }

        if (totalHours <= h)
            right = mid;
        else
            left = mid + 1;
    }

    return left;
}

int main()
{
    int bunches[] = {3, 6, 7, 11};
    int n = sizeof(bunches) / sizeof(bunches[0]);

    int h = 8;

    printf("%d\n", minSpeed(bunches, n, h));

    return 0;
}