// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/ 


#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to extract and sum digits
    while (num != 0) {
        sum += num % 10;  // Add last digit
        num /= 10;        // Remove last digit
    }

    // Output the sum of digits
    printf("%d\n", sum);

    return 0;
}


