//  Q101: Write a Program to take a sorted array(say nums[]) and 
//  an integer (say target) as inputs. The elements in the sorted array 
//  might be repeated. You need to print the first and last occurrence of 
//  the target and print the index of first and last occurrence. Print
//  -1, -1 if the target is not present. 


/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5
*/



#include <stdio.h>

// find first occurrence
int firstOcc(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1; // default = not found

    while (low <= high) {
        int mid = (low + high) / 2; // mid index

        if (arr[mid] == target) {
            ans = mid;      // store this position
            high = mid - 1; // keep going left for earliest one
        } 
        else if (arr[mid] < target) {
            low = mid + 1; // go right
        } else {
            high = mid - 1;  // go left
        }
    }
    return ans; // send the result back to main
}

// same logic but for last occurrence
int lastOcc(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1; // push right
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans; // send the result back to main
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int f = firstOcc(arr, n, target);
    int l = lastOcc(arr, n, target);

    printf("%d %d\n", f, l);
    return 0;
}