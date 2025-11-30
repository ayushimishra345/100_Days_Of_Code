/* Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/


#include <stdio.h>

int main() {
    int row, col;

    // top part
    for(row=1; row<=7; row+=2){
        for(col=0; col<row; col++){
            printf("*");
        }
        printf("\n");
        if(row==1 || row==3){
            printf("\n"); 
        }
    }

    // bottom part
    for(row=3; row>=1; row-=2){
        for(col=0; col<row; col++){
            printf("*");
        }
        printf("\n");
        if(row==3 || row==1){
            printf("\n");
        }
    }

    return 0;
}


