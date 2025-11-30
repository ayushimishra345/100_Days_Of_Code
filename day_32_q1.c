// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/



#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i, j;

    // first arr
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // second arr
    for (j = 0; j < size2; j++) {
        merged[i + j] = arr2[j];
    }
}

int main() {
    int size1, size2;

    // size of first array (input)
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // size of second array (input)
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // merged array
    int merged[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Printing merged array
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

    