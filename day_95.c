// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/


#include <stdio.h>
#include <string.h>

#define MAX 50

// Enum to show if comparison found a higher mark
enum Compare { LOWER = 0, HIGHER = 1 };

// Structure to store student details
struct Student {
    char name[MAX];
    int roll;
    int marks;
};

// Function to return the top scoring student
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        // using enum for comparison purpose
        enum Compare c = (s[i].marks > s[topIndex].marks) ? HIGHER : LOWER;

        if (c == HIGHER) {
            topIndex = i;
        }
    }

    return s[topIndex];  // return the structure
}

int main() {
    int n;

    // Prompt for number of students
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;

    struct Student s[n];

    // Read each student's details with a prompt
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (name roll marks): ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}