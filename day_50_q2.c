//  Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/


#include <stdio.h>
#include <string.h>

int main() {
    // Declare array to store input string
    char string[100];
    
    
    // Read input string
    scanf("%s", string);
    
    // Get string length
    int n = strlen(string);
    
    // Generate all substrings
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            // Print substring from index i to j
            for(int k = i; k <= j; k++) {
                printf("%c", string[k]);
            }
            // Add comma after each substring except the last one
            if(!(i == n-1 && j == n-1)) {
                printf(",");
            }
        }
    }
    printf("\n");
    
    return 0;
}


