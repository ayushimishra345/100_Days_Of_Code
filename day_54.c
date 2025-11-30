// Q104: Write a Program to take a positive integer n as input,
//       and find the pivot integer x such that the sum of all 
//       elements between 1 and x inclusively equals the sum of all
//       elements between x and n inclusively. Print the pivot integer x.
//       If no such integer exists, print -1. Assume that it is guaranteed
//       that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    long long total = 1LL *n* (n + 1)/ 2;

    // Solve for x using the formula x = sqrt(total)
    long long x = sqrt(total);

    // Check if x is a valid 
    if (x*x == total) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}