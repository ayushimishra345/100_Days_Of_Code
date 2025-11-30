// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/


#include <stdio.h>
#include <ctype.h>   // for toupper(), tolower()

int main() {
    char str[200];
    int i = 0;

    // Ask user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read whole line including spaces

    // Convert to sentence case
    while (str[i] != '\0') {
        // Capitalize first character if it's a letter
        if (i == 0 && str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
        // Capitalize when previous char is a space
        else if (str[i] != ' ' && str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        // Otherwise make letters lowercase (optional but cleaner)
        else {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    // Print the final result
    printf("%s", str);

    return 0;
}