// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h> 
#include <string.h>

int main() {
    char str[1000]; // to store input string ( max limit is 1000 chars )
    int found = 0;  // Flag to track if we found a repeating char

    // taking input
    printf("Enter a string: ");
    scanf("%s", str);

    // check each chars against remaining string
    for(int i = 0; i < strlen(str) && !found; i++) {
        for(int j=i + 1; j < strlen(str); j++) {
            if(str[i]==str[j]) {
                printf("%c\n", str[i]);
                found = 1;  // Set flag to exit both loops
                break; // exit the inner loop
            }
        }
    }

    return 0;
}