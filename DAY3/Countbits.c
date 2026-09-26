#include <stdio.h>
#include <stdlib.h>

int countBits(int n) {
    int count = 0;

    while (n > 0) {
        int add = n & 1;
        count = count + add;
        n = n >> 1;
    }

    return count;
}

int* countingBitsForN(int n) {
    int *result = malloc((n + 1) * sizeof(int));

    for (int i = 0; i <= n; i++) {
        result[i] = countBits(i);
    }

    return result;
}

int main() {
    int n = 5;

    int *result = countingBitsForN(n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}