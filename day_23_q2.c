// Q46: Write a program to print the following pattern:
//   *****
//   *****
//   *****
//   *****
//   *****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/ 

#include <stdio.h>

int main(void) {
    int row, col;

    /* Outer loop: one iteration per line */
    for (row = 0; row < 5; row++) {
        /* Inner loop: print five asterisks on the current line */
        for (col = 0; col < 5; col++) {
            printf("*");
        }
        /* After printing five asterisks, move to the next line */
        printf("\n");
    }

    return 0;
}

