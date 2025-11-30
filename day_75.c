// Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/


#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Ask the user for the existing file name
    printf("Enter the file name to open: ");
    scanf("%s", filename);

    // Open file in append mode ("a")
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file. Please make sure it exists.\n");
        return 1;
    }

    // Clear input buffer before using fgets
    getchar();

    // Get text from user
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin); // reads a full line including spaces

    // Append the text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
