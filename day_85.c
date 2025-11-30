// Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

// Enum with explicit starting value
enum Letters {
    A = 10,   // Start at 10
    B,        // Auto-increments to 11
    C         // Auto-increments to 12
};

int main() {
    // Printing the values
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}