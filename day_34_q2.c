// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/


#include <stdio.h>

int main() {
    int n;
    
    // Read array size
    scanf("%d", &n);
    
    // Create array and read elements
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read index to delete
    int index;
    scanf("%d", &index);
    
    // Shift elements left from index position
    for(int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print resulting array
    for(int i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if(i < n - 2) {
            printf(" ");
        }
    }
     printf("\n");
    
    return 0;
}

