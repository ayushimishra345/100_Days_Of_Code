// Q109: Write a program to take an integer array arr and an integer k as inputs.
//       Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // just a quick check — if k is bigger than array size, there's no valid subarray
    if (k > n) {
        printf("-1");
        return 0;
    }

    // calculate sum of the first window of size k
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;  // start by assuming first window is the max

    // now slide the window across the array
    for (int i = k; i < n; i++) {
        // remove element going out, add the new one coming in
        currentSum = currentSum - arr[i - k] + arr[i];

        // update max if needed
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // final answer
    printf("%d", maxSum);

    return 0;
}