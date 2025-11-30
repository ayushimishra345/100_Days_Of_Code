// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, 
// and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/


#include <stdio.h>
#include <ctype.h>  // for toupper()
#include <string.h>

int main() {
    FILE *fin, *fout;
    char ch;
    char inputFileName[100];
    char outputFileName[100];

    // Prompt user for input file name
    printf("Enter input file name (default: input.txt): ");
    fgets(inputFileName, sizeof(inputFileName), stdin);
    // Remove trailing newline
    size_t len = strlen(inputFileName);
    if (len > 0 && inputFileName[len - 1] == '\n') {
        inputFileName[len - 1] = '\0';
    }
    // Use default if empty input
    if (strlen(inputFileName) == 0) {
        strcpy(inputFileName, "input.txt");
    }

    // Prompt user for output file name
    printf("Enter output file name (default: output.txt): ");
    fgets(outputFileName, sizeof(outputFileName), stdin);
    // Remove trailing newline
    len = strlen(outputFileName);
    if (len > 0 && outputFileName[len - 1] == '\n') {
        outputFileName[len - 1] = '\0';
    }
    // Use default if empty input
    if (strlen(outputFileName) == 0) {
        strcpy(outputFileName, "output.txt");
    }

    // Open input file for reading
    fin = fopen(inputFileName, "r");
    if (fin == NULL) {
        printf("Error: Could not open %s for reading\n", inputFileName);
        return 1;  // exit if file can't be opened
    }

    // Open output file for writing
    fout = fopen(outputFileName, "w");
    if (fout == NULL) {
        printf("Error: Could not open %s for writing\n", outputFileName);
        fclose(fin);
        return 1;
    }

    printf("Converting %s to uppercase and writing to %s...\n", inputFileName, outputFileName);

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);     // convert lowercase → uppercase
        fputc(ch, fout);      // write character
    }

    // Close files
    fclose(fin);
    fclose(fout);

    printf("Conversion completed successfully!\n");
    printf("Output written to %s\n", outputFileName);

    return 0;
}