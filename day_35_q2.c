// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *a = malloc(n * sizeof(int));
    if (!a) return 0;

    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int k;
    if (scanf("%d", &k) != 1) {
        free(a);
        return 0;
    }

    if (n == 0) {
        free(a);
        return 0;
    }

    k %= n;
    if (k < 0) k += n;

    int *b = malloc(n * sizeof(int));
    if (!b) {
        free(a);
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        int newIndex = (i + k) % n;
        b[newIndex] = a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (i) printf(" ");
        printf("%d", b[i]);
    }
    printf("\n");

    free(a);
    free(b);
    return 0;
}