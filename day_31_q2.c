// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/


#include <stdio.h>

int main() {
    int n;
    
    // enter array size
    scanf("%d", &n);
    
    // array of size n
    int arr[n];
    
    // array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // loop to swap elements
    for(int i = 0, j = n-1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

        
    printf("\n");
    
    return 0;
}

