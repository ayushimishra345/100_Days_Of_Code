// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/


#include<stdio.h>

int main()
{
    int odd_count = 0;
    int even_count = 0;
    int size;
    int n;

    printf("Enter array size\n");
    scanf("%d", &n);
 
    int arr[n];


    //get array elements from the user as input
    printf("Enter array elements\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // check each element in the array

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    //print the result
    printf("Total even numbers = %d\n", even_count);
    printf("Total odd numbers = %d\n", odd_count);

    return 0;
}

