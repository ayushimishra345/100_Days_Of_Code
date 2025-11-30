// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    // Declare a variable to store the integer input from the user.
    int number;

    // Prompt the user to enter an integer.
    printf("Enter an integer: ");
    
    // Read the integer from the standard input and store it in the 'number' variable.
    scanf("%d", &number);

    // Outer if statement to check if the number is not zero.
    if (number != 0) {
        // Inner if statement to check if the number is greater than 0.
        if (number > 0) {
            // If the number is greater than 0, it is positive.
            printf("Positive\n");
        } else {
            // If the number is not greater than 0 (and not zero), it must be negative.
            printf("Negative\n");
        }
    } else {
        // If the number is 0, print "Zero".
        printf("Zero\n");
    }

    // Return 0 to indicate that the program executed successfully.
    return 0;
}

