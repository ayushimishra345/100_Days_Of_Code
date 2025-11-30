// Q102: Write a Program to take a sorted array arr[] and an integer x as input,
//   find the index (0-based) of the smallest element in arr[] that is greater than
//   or equal to x and print it. This element is called the ceil of x. If such an 
//   element does not exist, print -1. Note: In case of multiple occurrences of ceil
//   of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/


#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;   // stores index of ceil

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // possible answer
            high = mid - 1;  // try to find earlier occurrence
        } else {
            low = mid + 1;   // move right
        }
    }

    return ans;  // will be -1 if no ceil found
}

int main() {
    int n, x;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements (sorted)
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result = findCeil(arr, n, x);
    printf("%d", result);

    return 0;
}