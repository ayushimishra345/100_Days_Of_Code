// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/


#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    // A symmetric matrix must be square
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];

    // Read the elements of matrices
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    // check symmetry
    int isSymmetric = 1;
    for (int i = 0; i < rows && isSymmetric; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // output
    printf("%s\n", isSymmetric ? "True" : "False");
    return 0;
}

