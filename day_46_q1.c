// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/


#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50]; // store input string ( max limit is 50 character )
    int i=0;
    int j; 
    int chk;

    // taking user input
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0')
    {
        chk=0;

        // Check if current character is a vowel (both uppercase and lowercase)
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O'||
           str[i]=='U')
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1]; // Move each char one position left
                j++;
            }
            chk = 1; // Set flag to indicate vowel was found
        }
        // Only increment position if no vowel was found
        if(chk==0)
            i++;
    }

    // print final result (string) without vowels
    printf("\nString (without vowels): %s", str);
    
    return 0;
}
