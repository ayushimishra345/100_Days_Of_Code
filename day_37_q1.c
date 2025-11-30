// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/


#include <stdio.h>

int main() {
    int m, n;
    int arr[50][50];   // for simplicity
    int rowSum[50];
    int i, j;

    // input rows and columns
    printf("Enter the size of matrix (rows & columns):\n");
    scanf("%d %d", &m, &n);

    // read matrix
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // find sum of each row
    for (i = 0; i < m; i++) {
        rowSum[i] = 0;      // reset sum for this row
        for (j = 0; j < n; j++) {
            rowSum[i] += arr[i][j];
        }
    }

    // print the row sums
    printf("Row sums:\n");
    for (i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
