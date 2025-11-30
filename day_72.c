// Q122: Write a C program that opens an existing file (e.g., info.txt) 
// and reads its contents using fgets(). The program should print all 
// the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/


#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];   // to store the file name entered by user
    char line[200];       // to store each line from the file

    // Ask user for the file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Try opening the file
    fp = fopen(filename, "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open the file '%s'.\n", filename);
        return 1;   // end program if file can't be opened
    }

    // Read and print each line from the file using fgets()
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file after use
    fclose(fp);

    return 0;
}