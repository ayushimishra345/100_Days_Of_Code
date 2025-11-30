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
enum DataType { NAME, ROLL, MARKS };
struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;                 
    struct Student *ptr = &s;        
    printf("Enter name: ");
    if (fgets(ptr->name, sizeof(ptr->name), stdin) == NULL) return 0;
    size_t ln = strlen(ptr->name);
    if (ln > 0 && ptr->name[ln - 1] == '\n') ptr->name[ln - 1] = '\0';
    printf("Enter roll: ");
    if (scanf("%d", &ptr->roll) != 1) {
        fprintf(stderr, "Invalid input for roll.\n");
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%d", &ptr->marks) != 1) {
        fprintf(stderr, "Invalid input for marks.\n");
        return 1;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
