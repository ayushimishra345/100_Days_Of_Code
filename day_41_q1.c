// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/


#include <stdio.h>

int main() {
    char str[200];   // assuming for simplicity 
    int count = 0;

    // read all lines including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;   // just exit if no input
    }

    // loop until null character or newline is found
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')   // stop at newline
            break;
        count++;
    }

    // final result
    printf("%d\n", count);
    return 0;
}