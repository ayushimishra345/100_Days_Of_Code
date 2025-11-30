// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/


#include <stdio.h>
#include <string.h>

// Function to reverse a word between start and end indices
void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];  // Arr to store input sentence 
    
    // Read everything in input sentence including spaces
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if present
    int len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    int wordStart = 0;  // Start index of current word
    
    // Process each character
    for (int i = 0; i <= len; i++) {
        // If space or end of string found, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, wordStart, i-1);
            wordStart = i + 1;  // Update start index for next word
        }
    }
    
    // Print final result
    printf("%s\n", str);
    
    return 0;
}