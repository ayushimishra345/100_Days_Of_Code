// Q113: Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the kth smallest element in the array. 
// Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>

int main() {
    int n, k;

    // Input the size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value of k
    printf("Enter k (to find kth smallest element): ");
    scanf("%d", &k);

    // Simple Bubble Sort to sort the array in ascending order
    // Not the most efficient but very easy to understand
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // After sorting, the kth smallest element is at index k-1
    printf("The %dth smallest element is: %d\n", k, arr[k-1]);

    return 0;
}