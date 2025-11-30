// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/


#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1; // Assume prime until proven otherwise

    // Prompt the user
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    // Handle numbers less than 2
    if (num < 2) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break; // No need to check further
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}


