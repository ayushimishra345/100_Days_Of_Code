// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
int main() {
    char str[1000]; // string input limit
    char ch;  // char to find
    int i, count = 0; // loop variable and counter 

    // taking string input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // asking for the char input
    printf("Enter the char to find its frequency: ");
    scanf("%c", &ch);


    // loop through the string until null character
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    // print result 
    printf("Frequency of %c = %d", ch, count);
    return 0;
}