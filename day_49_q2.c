// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char str[100]; 
    int len;
    int i;
    int a = 0; // to store index of last space

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    // print initial of first name
    printf("%c.", str[0]);

    // find the last space (start of surname)
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            a = i;
        }
    }
    // print initials of middle names
    for (i = 0; i < a; i++) {
        if (str[i] == ' ') {
            printf("%c.", str[i + 1]);
        }
    }
    // print surname
    for (i = a + 1; i < len; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}