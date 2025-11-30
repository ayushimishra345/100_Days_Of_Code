// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/



#include <stdio.h>

// find max and min in an array
void findMinMax(int arr[], int n, int *max, int *min) {

    // Assume first element as minimum and maximum
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {

        // Update max if arr[i] is larger
        if (arr[i] > *max)
            *max = arr[i];

        // Update min if arr[i] is smaller
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // create array of size n

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
  	
    // FinD min and max values in array
    findMinMax(arr, n, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}


