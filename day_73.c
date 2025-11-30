// Q123: Read a text file and count the total number of characters, 
// words, and lines. A word is defined as a sequence of non-space 
// characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // flag to check if we are inside a word

    // Ask user for file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count every char including spaces and newline

        if (ch == '\n')
            lines++;   // count lines

        // Check if character is not a space or newline (part of a word)
        if (!isspace(ch) && inWord == 0) {
            inWord = 1; // we just entered a word
            words++;
        }

        // If we hit a space/newline, we are no longer in a word
        if (isspace(ch)) {
            inWord = 0;
        }
    }

    // If file has content but no newline, count at least one line
    if (characters > 0 && lines == 0)
        lines = 1;

    fclose(fp);

    // Print results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}