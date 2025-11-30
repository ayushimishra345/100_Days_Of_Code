// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/



#include <stdio.h>

// Using an enum just to label fields (as the question requires)
enum InfoType { NAME, ROLL, MARKS };

// Structure to hold student data
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to print the student details
void printStudent(struct Student s) {
    // printing in required format
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    // Taking input in the same style as sample test case
    // Example: Student: Neha 104 92
    printf("Student: ");
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printStudent(s); // passing structure by value to function

    return 0;
}