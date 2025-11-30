// Q121: Write a C program that creates a text file named info.txt in write mode. 
// The program should take the user’s name and age as input, 
// and write them to the file using fprintf(). After writing, 
// display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

/* Simple program to write a user's name and age into info.txt
   Written in a clear, student-style with brief comments.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode. This creates the file (or truncates if it exists).
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        perror("Error creating file");
        return 1;
    }

    // Get user name (allow spaces) and age
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        // fallback if input fails
        strcpy(name, "Unknown");
    } else {
        // remove trailing newline added by fgets
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)  
    {
        printf("Invalid age input. Using age = 0.\n");
        age = 0;
    }

    // Write to file using fprintf
    fprintf(fp, "Name: %s Age: %d", name, age);

    // Close the file
    fclose(fp);

    // Confirm to user
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}