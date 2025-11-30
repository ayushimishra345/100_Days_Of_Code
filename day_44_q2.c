// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/


#include <stdio.h> 

int main() {
    char str[500]; // for simplicity (500 chars max)

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read full lines including spaces


    // keep checking each char till the end of the string
    for(int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        if(str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
    }

    // printing final result
    printf("%s", str);

    return 0;

}