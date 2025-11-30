// Q117: Write a program to take two sorted arrays of size m and n as input. 
// Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int m, n;

    // Asking user for sizes (simple and friendly)
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);

    int nums1[m], nums2[n];
    int merged[m + n];

    // Input first array
    printf("Enter %d elements (sorted): ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Input second array
    printf("Enter %d elements (sorted): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    // Merge process
    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements from nums1 (if any)
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements from nums2 (if any)
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print merged array
    printf("Merged Sorted Array:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}