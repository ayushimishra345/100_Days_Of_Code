// Q119: Write a program to take an integer array as input. Only one element will be repeated. 
// Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/


#include <stdio.h>

int main() {
    int n;

    // read size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // read elements
    printf("Enter %d elements (one element will be repeated):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
       // We use a simple frequency array approach.
       // we assume values won't exceed 100000.
       // This keeps code simple and still one-pass.


    int freq[100001] = {0};

    // single iteration to find the repeated element
    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d", arr[i]); // repeated number found
            return 0;
        }
        freq[arr[i]]++;
    }

    return 0;
}