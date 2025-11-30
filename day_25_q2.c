// Q50: Write a program to print the following pattern:
//      *****
//      ****
//      ***
//      **
//      *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
****
***
**
*

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/


#include <stdio.h>

int main() {
    const int rows = 5;  // Number of rows in pattern
    
    // Outer loop for rows
    for(int i = rows; i >= 1; i--) {
        // Inner loop for printing stars in each row
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }
    
    return 0;
}

