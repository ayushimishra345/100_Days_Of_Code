// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100]; // Array to store input string (max 100 chars)
  	int i;
 
    // take input string
  	printf("Please Enter a String that you want to Convert into Uppercase :  ");
  	gets(Str1);
  	
  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
            // Convert to uppercase by subtracting 32
            // ASCII difference between uppercase and lowercase is 32
  			Str1[i] = Str1[i] -32;
		}
  	}

    // print converted string
  	printf("The given String in Upper Case = %s\n", Str1);
  	
  	return 0;
}