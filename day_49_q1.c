// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[55];  // arr to store input name
    int i;

    // taking input
    printf("Enter a name\n");
    gets(s);

    // process each char of strings
    for(i=0; i<strlen(s); i++)
    {
        if(i==0 && s[i]!=' ')
        {
            printf("%c",s[i]);
        }

        // print char after space if it's not another space
        // also add a dot before the initial
        else if(s[i]==' ' && s[i+1]!=' ')
        {
            printf(".%c",s[i+1]);
        }
    }

    // add final dot
    printf(".\n");
    return 0;
}