// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;          // Get last digit
        reversed = reversed * 10 + digit; // Append digit to reversed
        num = num / 10;                // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}



