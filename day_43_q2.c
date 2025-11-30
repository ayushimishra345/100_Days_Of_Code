// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/


#include <stdio.h>
#include <string.h>

int main() {
    char string1[20];
    int i, length;
    int condition = 0;

    // taking input from user
    printf("Enter a string: ");
    scanf("%s", string1);

    // Calculate the string len
    length = strlen(string1);

    // Compare characters from the start and end of the string
    // and stop if a mismatch found or the middle of the string is reached.
    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            condition = 1;
            break;
        }
    }

    // final result
    if (condition) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}