// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// check if two strings are rotations of each other
int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // if both strings are not of same length
    if (len1 != len2)
        return 0;

    // make a new string which is str1 + str1
    char *temp = (char *)malloc((len1 * 2) + 1);
    if (temp == NULL)  {
        printf("Memory error!\n");
        return 0;
    }

    temp[0] = '\0';  // initialize empty strings
    strcat(temp, str1);
    strcat(temp, str1);
    // check if str2 exists inside temp
    char *found = strstr(temp, str2);

    free(temp);  // free memory after use

    if (found != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);  // gets() is unsafe but fine for basic programs
    printf("Enter second string: ");
    gets(str2);

    if (isRotation(str1, str2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
