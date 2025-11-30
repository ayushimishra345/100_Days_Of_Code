// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/


#include <stdio.h>
#include <string.h>

// Enum to represent operations
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

// Function to convert string to enum
enum Operation getOperation(char op[]) {
    if (strcmp(op, "ADD") == 0) return ADD;
    if (strcmp(op, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(op, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID; // In case of wrong input
}

int main() {
    char op[20];
    int a, b;

    // Reading input like: ADD 10 20
    printf("Enter operation and two numbers: ");
    scanf("%s %d %d", op, &a, &b);

    enum Operation choice = getOperation(op);

    int result;

    // Performing operation using switch
    switch (choice) {
        case ADD:
            result = a + b;
            break;

        case SUBTRACT:
            result = a - b;
            break;

        case MULTIPLY:
            result = a * b;
            break;

        default:
            printf("Invalid Operation\n");
            return 0;
    }

    // Printing the result
    printf("%d", result);

    return 0;
}