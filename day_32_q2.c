// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/


#include <stdio.h>

int main() {
    long long num;   // to handle big numbers
    int freq[10] = {0};  // frequency arr for digits 0-9
    
    // Input
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    // Count digit frequencies
    while (num > 0) {
        int digit = num % 10;   
        freq[digit]++;          
        num = num / 10;         
    }
    
    // Find digit with maximum frequency
    int maxDigit = 0, maxCount = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }
    
    // final result
    printf("Digit with maximum frequency: %d\n", maxDigit);
    
    return 0;
}