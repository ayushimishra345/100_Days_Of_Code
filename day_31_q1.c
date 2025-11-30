// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/



#include <stdio.h>

int search(int array[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x)
            return i;
    }
    return -1;
}

// step1: enter the num of elements u want
int main() {
    int n;
    scanf("%d", &n); // size of arr

    // step2: enter the elements 
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); // arr elements
    }

    // step3: search for the elements
    int x;
    printf("enter the element: ");
    scanf("%d", &x); // Read element to search

    int result = search(array, n, x);

    if (result == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", result);
}

