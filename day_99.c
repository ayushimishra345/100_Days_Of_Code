// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A small enum to name fields — shows how to use enum simply 
enum StudentField { NAME_FIELD = 0, ROLL_FIELD, MARKS_FIELD };

// Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void) {
    // Allocate memory for one Student on the heap 
    struct Student *stu = malloc(sizeof(struct Student));
    if (stu == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    char line[200];
    char tempName[50];
    int roll, marks;

    // Read a single line from stdin (accepts either:
    // "Student allocated dynamically with details: Tina 105 88"
    // or simply "Tina 105 88")
    if (fgets(line, sizeof(line), stdin) == NULL) {
        fprintf(stderr, "No input provided\n");
        free(stu);
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') line[len - 1] = '\0';

    // If input contains ':', skip everything up to it
    char *data = strchr(line, ':');
    if (data) data++;      // point after ':'
    else data = line;      // use full line

    // Parse name roll marks from the remaining text
    if (sscanf(data, " %49s %d %d", tempName, &roll, &marks) != 3) {
        fprintf(stderr, "Invalid input format. Expected: [optional text:] name roll marks\n");
        free(stu);
        return 1;
    }

    // store values into the dynamically allocated struct
    strcpy(stu->name, tempName);
    stu->roll = roll;
    stu->marks = marks;

    // Print using a human-friendly format 
    printf("Name: %s | Roll: %d | Marks: %d\n", stu->name, stu->roll, stu->marks);

    // Clean up
    free(stu);
    return 0;
}