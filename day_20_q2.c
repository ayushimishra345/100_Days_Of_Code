// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/


#include <stdio.h>

int main(void) {
    int ch;

    // enter a binary number
    printf("Enter a binary number (only 0s and 1s): ");

    // one character at a time and print its 1's complement
    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch == '0') {
            putchar('1');
        } else if (ch == '1') {
            putchar('0');
        } else {
            // Ignore any non-binary characters (optional: handle error)
        }
    }

    putchar('\n');
    return 0;
}

