// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
int main(){

   char str[100];
   int i, vowels, consonants;
   
   // counters
   i = vowels = consonants = 0;

   // taking input from users
   printf("Enter any String: ");
   gets(str);

   // checking vowel 
   while (str[i] != '\0'){
      if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
         str[i] == 'O' || str[i] == 'U'  ||str[i] == 'a' ||
         str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
         str[i] == 'u' ){
      vowels++;
      }
      else
         consonants++; // reat all treated as consonants 
         i++;
   }

   // print total nums of vowels and consonants in string
   printf("vowels = %d, ", vowels);
   printf("consonants = %d", consonants);
   return 0;
}