// Q108: Write a Program to take an integer array nums. 
//   Print an array answer such that answer[i] is equal to the 
//   product of all the elements of nums except nums[i]. 
//   The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // taking array input 

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // this will store product of all elements on the left side
    int leftProd = 1;

    // first pass: fill result[] with left side products
    for (int i = 0; i < n; i++) {
        answer[i] = leftProd;
        leftProd *= nums[i];
    }

    // this will store product of elements on the right side
    int rightProd = 1;

    // second pass: multiply right side products into result[]
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= rightProd;
        rightProd *= nums[i];
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(","); // avoid extra comma
    }

    return 0;
}
