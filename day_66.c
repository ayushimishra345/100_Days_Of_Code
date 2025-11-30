//  Q116: Write a program to take an integer array nums which contains only positive integers, 
//  and an integer target as inputs. The goal is to find two distinct indices i and j 
//  in the array such that nums[i] + nums[j] equals the target. 
//  Assume exactly one solution exists and return the indices in any order. 
//  Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/


#include <stdio.h>

int main() {
    int n, target;

    // Read array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Read array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read target value
    printf("Enter target value: ");
    scanf("%d", &target);

    int found = 0;

    // Simple double loop to find the pair
    // This is easy to understand for beginners
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    // If no valid pair found
    if(!found) {
        printf("-1 -1");
    }

    return 0;
}