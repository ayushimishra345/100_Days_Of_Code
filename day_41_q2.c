// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
he
*/

#include <stdio.h>

int main(void)
{
    // var to store each char
    int c;

    // reading char until new line or end
    // EOF = end of file
    while ((c = getchar()) != '\n' && c !=EOF) {

        // Print each character on a new line
        // %c format specifier for character
        // \n for new line after each character
        printf("\t%c \n", c);
    }
    return 0;
}