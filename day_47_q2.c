// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error!\n");
        return 1;
    }

    // Remove trailing newline if present
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int maxLength = 0, currentLength = 0;
    char longestWord[100] = "";   // initialize to empty string
    char currentWord[100];

    for (i = 0; i <= len; i++) {
        if (isalpha((unsigned char)str[i])) {
            currentWord[currentLength++] = str[i];
        } else {
            if (currentLength > 0) {
                currentWord[currentLength] = '\0';
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                currentLength = 0;
            }
        }
    }

    if (maxLength > 0) {
        printf("Longest word: %s\n", longestWord);
        printf("Length: %d\n", maxLength);
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}