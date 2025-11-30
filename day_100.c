// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/


#include <stdio.h>
#include <string.h>

// Enum for choosing what data we are modifying (kept for compatibility)
enum DataType { NAME, ROLL, MARKS };

// Structure for student details
struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;                  // normal structure variable
    struct Student *ptr = &s;          // pointer to structure

    // user for inpu
    printf("Enter name: ");
    if (fgets(ptr->name, sizeof(ptr->name), stdin) == NULL) return 0;
    // remove trailing newline from fgets
    size_t ln = strlen(ptr->name);
    if (ln > 0 && ptr->name[ln - 1] == '\n') ptr->name[ln - 1] = '\0';

    //read roll number separately
    printf("Enter roll: ");
    if (scanf("%d", &ptr->roll) != 1) {
        fprintf(stderr, "Invalid input for roll.\n");
        return 1;
    }

    //marks separately  to avoid missing input
    printf("Enter marks: ");
    if (scanf("%d", &ptr->marks) != 1) {
        fprintf(stderr, "Invalid input for marks.\n");
        return 1;
    }

    // Displaying modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}