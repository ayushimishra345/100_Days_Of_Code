// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/



#include <stdio.h>

// Enum to represent the type of student status

enum Status {
    NORMAL,
    TOPPER
};

// Structure to store student details
struct Student {
    char name[50];
    int roll;
    int marks;
    enum Status rank; // will mark TOPPER later
};

int main() {
    int n;

    // Asking number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Taking input
    printf("Enter student details (Name Roll Marks):\n");
    for(int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        s[i].rank = NORMAL; // default
    }

    // Finding topper
    int topIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    s[topIndex].rank = TOPPER;

    // Printing topper
    printf("\nTopper: %s (Marks: %d)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}