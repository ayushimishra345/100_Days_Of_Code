// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/


#include <stdio.h>
#include <string.h>

// enum to represent comparison result
enum Status { SAME, NOT_SAME };

// struct for student information
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;
    enum Status result;   // variable of enum type

    // reading details for Student 1
    printf("Enter details for Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // reading details for Student 2
    printf("Enter details for Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // checking all member values using enum
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {

        result = SAME;
    } else {
        result = NOT_SAME;
    }

    // printing result based on enum value
    if (result == SAME) {
        printf("Same");
    } else {
        printf("Not Same");
    }

    return 0;
}