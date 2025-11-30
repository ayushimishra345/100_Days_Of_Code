// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/ 

#include <stdio.h>

int main() {
    int a, b, lcm;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Start from the greater of the two numbers
    lcm = (a > b) ? a : b;

    // Loop until we find a common multiple
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("%d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}


