// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Using enum to define constants (demonstrates use of 'enum' as requested) 
enum { MAX_NAME = 100 };  // maximum characters for student's name

// Define Student structure with name, roll_no and marks
typedef struct {
    char name[MAX_NAME];
    int roll_no;
    int marks;
} Student;

int main(void) {
    Student s;
    char buffer[128]; // temporary buffer to read numeric lines

    // Read student's name (allows spaces)
    printf("Name: ");
    if (fgets(s.name, MAX_NAME, stdin) == NULL) {
        // input failed, exit gracefully
        return 0;
    }
    // remove trailing newline if present
    s.name[strcspn(s.name, "\n")] = '\0';

    // Read roll number as a line then convert to int
    printf("Roll: ");
    if (fgets(buffer, sizeof buffer, stdin) == NULL) {
        return 0;
    }
    s.roll_no = atoi(buffer); // basic conversion, okay for simple student code

    // Read marks as a line then convert to int
    printf("Marks: ");
    if (fgets(buffer, sizeof buffer, stdin) == NULL) {
        return 0;
    }
    s.marks = atoi(buffer);

    // Print exactly in the format requested 
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}