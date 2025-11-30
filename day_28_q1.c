// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/


// print prime numbers b/w 1 to n
#include<stdio.h>
void main(){
   int i, num, n, count;

   printf("Enter the range: ");
   scanf("%d", &n);
   printf("The prime numbers in b/w the range 1 to %d: ",n);

    // go through each number from 1 to n
   for(num = 1;num<=n;num++){
      count = 0;

      // if num is divisible by any smaller number
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;            // this means num is not prime
         break;                 // stop checking
      }


   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}

