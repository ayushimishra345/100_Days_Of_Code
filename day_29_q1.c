// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/


#include <stdio.h>

int main() {
    int n, i, num, sum = 0;   // n = number of array

    printf("Enter the number: ");
    scanf("%d", &n);

    // loop for reading n numbers
    for(i = 0; i < n; i++) {
        scanf("%d", &num);      // read one number
        sum = sum + num;       // adding  
    }

    printf("%d", sum);

    return 0;
}

