// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/


#include <stdio.h>
 
int find_anagram(char [], char []);
 
int main()
{
    char array1[100], array2[100];
    int flag;
 
    // taking input 
    printf("Enter the string\n");
    gets(array1);
    printf("Enter another string\n");
    gets(array2);

    // check strings are anagrams
    flag = find_anagram(array1, array2);

    // print result based on flag
    if (flag == 1)
        printf("%s and %s are anagrams.\n", array1, array2);
    else
        printf(" %s and %s are not anagrams.\n", array1, array2);
    return 0;
}
 
int find_anagram(char array1[], char array2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        num1[array1[i] - 'a']++; // convert char to index
        i++;
    }

    // count frequency of each character in second string
    i = 0;
    while (array2[i] != '\0')
    {
        num2[array2[i] -'a']++;
        i++;
    }

    // compare each characters
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0; // if any condition fails, not anagram
    }
    return 1; // all conditions match, strings are anagrams
}
