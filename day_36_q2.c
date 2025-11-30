// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/


#include <stdio.h>

int main() {
    // variables for r=rows, c=columns
    int r, c;

    // read matrix dimensions and take input
    if (scanf("%d %d", &r, &c) != 2) return 0;

    // sum variable for total
    long long sum = 0;

    // initialize sum var to store total
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            long long x;
            if (scanf("%lld", &x) != 1) x = 0;

            // add element to running sum
            sum += x;
        }
    }

    // final result
    printf("%lld\n", sum);
    return 0;
}