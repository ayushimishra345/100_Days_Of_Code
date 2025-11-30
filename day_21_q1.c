// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/


#include <stdio.h>

int main() {
    int n, first, last, digits = 0, pow = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10; // Extract last digit

    // Count digits and find the first digit
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
        digits++;
    }
    first = temp;

    // If the number has only one digit, or both digits are the same
    if (n < 10 || first == last) {
        printf("%d\n", n);
        return 0;
    }

    // Remove first and last digit from n
    int middle = n % pow;     // removes the first digit
    middle = middle / 10;     // removes the last digit

    // Construct the new number
    int result = last * pow + middle * 10 + first;

    printf("%d\n", result);
    return 0;
}


