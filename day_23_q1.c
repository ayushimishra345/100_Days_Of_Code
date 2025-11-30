// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/


#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Read number of terms
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    // Compute 2/3 + 4/7 + 6/11 + … up to n terms
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;             // 2, 4, 6, ...
        double denominator = 4.0 * (i - 1) + 3.0; // 3, 7, 11, ...
        sum += numerator / denominator;
    }

    // Print with two decimal places
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
