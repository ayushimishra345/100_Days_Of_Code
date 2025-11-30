// Q105: Write a program to take an integer array nums of size n, and print the majority element.
//       The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
//       Print -1 if no such element exists. Note: Majority Element is not necessarily the 
//       element that is present most number of times.
//       Follow-up 2 : Can you do it in O(1) Time Complexity?

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);   // reading how many numbers we have

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);   // grabbing all the numbers
    }

    // Step 1: try to guess the majority element
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {

        // if count hits zero, we kinda "reset" our guess
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate) {
            count++;          // same number
        }
        else {
            count--;          // different number
        }
    }

    // Step 2: verify if our guess is actually majority
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    // Only print candidate if it appears more than n/2 times
    if (freq > n / 2) {
        printf("%d", candidate);
    } else {
        printf("-1");
    }

    return 0;
}