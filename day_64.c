//  Q114: Write a program to take a string s as input. 
//  The task is to find the length of the longest substring without repeating characters. 
//  Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);  // take input string

    int lastSeen[256]; 
    // keeps track of last index of every character
    // we init all values to -1")
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int start = 0;     // start of current window
    int maxLen = 0;    // answer
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        // if we see a repeated character inside the active window
        if (lastSeen[(unsigned char)s[i]] >= start) {
            // move start to the right of previous occurrence
            start = lastSeen[(unsigned char)s[i]] + 1;
        }

        // update last seen position of this character
        lastSeen[(unsigned char)s[i]] = i;

        // update max length
        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("Longest length: %d\n", maxLen);


    return 0;
}