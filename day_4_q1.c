// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/


#include <stdio.h>

int main() {
    int a, b;

    // take input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap logic without a third variable
    a = a + b;    // Step 1: a becomes sum of a and b
    b = a - b;    // Step 2: b becomes original a
    a = a - b;    // Step 3: a becomes original b

    // Output the swapped values
    printf("After swap: %d %d\n", a, b);

    return 0;
}


