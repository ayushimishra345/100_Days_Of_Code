// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // variable for rows and columns
    int R, C;

    // take input and read matrix dimensions
    if (scanf("%d %d", &R, &C) != 2) return 0;

    /// 2d arr
    int **a = malloc(R * sizeof(int*));
    for (int i = 0; i < R; ++i) {

        // memory for each row
        a[i] = malloc(C * sizeof(int));

        // read row by row
        for (int j = 0; j < C; ++j) scanf("%d", &a[i][j]);
    }


    int first = 1;
    for (int s = 0; s <= R + C - 2; ++s) {

        // calculate starting row for current digonal
        int start = s - (C - 1);
        if (start < 0) start = 0;

        // calculate ending row for current digonal
        int end = s;
        if (end > R - 1) end = R - 1;

        // for even sum 
        if (s % 2 == 0) {
            for (int i = end; i >= start; --i) {
                int j = s - i;
                if (!first) printf(" ");
                printf("%d", a[i][j]);
                first = 0;
            }
        } else {
            for (int i = start; i <= end; ++i) {
                int j = s - i;
                if (!first) printf(" ");
                printf("%d", a[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");

    for (int i = 0; i < R; ++i) free(a[i]);
    free(a);
    return 0;
}
