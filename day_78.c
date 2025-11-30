// Q128: Read a text file and count how many vowels and consonants are in the file. 
// Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>  // for isalpha() and tolower()

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Asking user for the filename
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Opening the file
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file. Please check the file name.\n");
        return 1;
    }

    // Reading character by character
    while ((ch = fgetc(fp)) != EOF) {

        // Convert to lowercase for easier checking
        ch = tolower(ch);

        // Check if character is alphabet
        if (isalpha(ch)) {
            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    // Output results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}