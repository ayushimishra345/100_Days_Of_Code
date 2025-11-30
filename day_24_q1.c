// Q47: Write a program to print the following pattern:
//  *
//  **
//  ***
//  ****
//  *****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/ 

#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {          // Outer loop for rows
        for(j = 1; j <= i; j++) {      // Inner loop for columns (stars)
            printf("*");
        }
        printf("\n");                  // Move to next line after each row
    }
    return 0;
}


