// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/


#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the matrix size u want:\n");
    scanf("%d %d", &r, &c);

    int mat[50][50];  // just a random limit
    int i, j;

    // reading matrix
    printf("Enter the elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // check the diagonal elements in matrix
    int flag = 1; // 1 means all distinct
    for(i = 0; i < r; i++) {
        for(j = i + 1; j < r; j++) {
            if(mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) {
            break;
        }
    }

    if(flag == 1) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    return 0;
}

