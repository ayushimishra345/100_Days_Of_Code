// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/



#include <stdio.h>

int main()
{
    char str[100]; // arr to store the string
    int countDigits, countSpecialChar, countSpaces;
    int counter;

    // initially set all counters to 0
    countDigits = countSpecialChar = countSpaces = 0;

    // taking input from user
    printf("Enter a string: ");
    gets(str);

    for (counter = 0; str[counter] != '\0'; counter++) {
        if (str[counter] >= '0' && str[counter] <= '9')   // check if character is a digit (0-9)
        countDigits++;
        else if (str[counter] == ' ')        // check if character is a space
        countSpaces++;
        else if ((str[counter] >= 'A' && str[counter] <= 'Z') ||  // check if character is alphabet
             (str[counter] >= 'a' && str[counter] <= 'z'))
        ; // do nothing if it's a letter (skip)
    else
        countSpecialChar++;  // if it’s not digit, space, or alphabet, then it’s special char
    }

    // print all the results
    printf("\nDigits: %d \nSpaces: %d \nSpecial Characters: %d", countDigits, countSpaces, countSpecialChar);

    return 0;
}
