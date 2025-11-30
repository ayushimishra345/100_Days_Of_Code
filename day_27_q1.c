/*  Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include <stdio.h>

int main() {
    int n = 9;  // max leghth
    int i, j;

    // upper part increasing by 2
    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part decreasing by 2
    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

