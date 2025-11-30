// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h> 

int main()
{
    //Initializing variable.
  	char str[100];
  	int i;
  	
    //takingting input from user
  	printf("\n Please Enter any String: ");
  	gets(str);
  	
  	//Initializing for loop
  	for (i = 0; str[i]!='\0'; i++)
  	{
  	    // toggling characters
  	    if(str[i] >= 'A' && str[i] <= 'Z') 
              str[i] = str[i] + 32; 
              
              
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
  		
  	}

    // final output
  	printf("\n Toglled string: %s", str);
  	
  	return 0;
}
