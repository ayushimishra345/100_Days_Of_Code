// Q118: Write a program to take an input array of size n. 
// The array should contain all the integers between 0 to n except for one. 
// Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/


#include <stdio.h>

int main() {
    int n;

    // ask user for array size
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int expectedSum = n * (n + 1) / 2;  // sum of numbers from 0 to n

    // taking array input
    printf("Enter %d numbers (between 0 and %d, missing one value):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // missing number is difference of expected sum and actual sum
    int missing = expectedSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}