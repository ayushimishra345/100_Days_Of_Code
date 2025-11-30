// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
    int a, b, c;
    int largest;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Initialize largest with the first number
    largest = a;

    // Compare with the second number
    if (b > largest) {
        largest = b;
    }

    // Compare with the third number
    if (c > largest) {
        largest = c;
    }

    // Output the result
    printf("Largest is %d\n", largest);

    return 0;
}
