// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/


#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // read number of terms
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    // Compute series: 1 + 3/2 + 5/6 + 7/12 + … up to n terms
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (i * (i - 1));
        }
    }

    // Print result rounded to one decimal place
    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}


