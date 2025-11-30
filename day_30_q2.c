// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/


#include <stdio.h>

void main()
{
    int n, i, positive = 0, negative = 0, zero = 0;

    // take input from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // take numbers from user
    printf("Enter array elements\n"); 
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)          // if number is greater than 0
            positive++;         // increase +ve number count
        else if (arr[i] < 0)    //  if number is smaller than 0
            negative++;        // increase -ve num count
        else
            zero++;           // increase 0 count
    }

    // result
    printf("\npositive elements: %d\n", positive);
    printf("negative elements: %d\n", negative);
    printf("Number of zeros: %d", zero);
}


