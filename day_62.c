// Q112: Write a program to take an integer array arr as input. 
// The task is to find the maximum sum of any contiguous subarray using 
// Kadane's algorithm. Print the maximum sum as output. If all elements are negative, 
// print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i =0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Kadane's Algorithm (Max Subarray Sum)
    int currentSum = arr[0];  // holds sum of current subarray
    int maxSum =arr[0];      // stores best (max) sum found so far

    for (int i = 1; i < n; i++) {
        // either extend previous subarray OR start fresh from current element
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        // update the global max
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);
    return 0;
}