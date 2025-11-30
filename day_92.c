// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/


#include <stdio.h>

// enum to define number of students
enum { TOTAL_STUDENTS = 5 };

// structure to store student details
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[TOTAL_STUDENTS];
    int i;

    printf("Enter details of %d students (Name Roll Marks):\n", TOTAL_STUDENTS);

    // taking input for all students
    for(i = 0; i < TOTAL_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // printing data in tabular form
    printf("\n-------------------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-------------------------------------------\n");

    for(i = 0; i < TOTAL_STUDENTS; i++) {
        printf("%s\t\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}