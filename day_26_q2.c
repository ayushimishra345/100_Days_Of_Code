// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int i, cnt;

    for (i = 1; i <= 5; i++) {
        if (i == 1) cnt = 1;
        else if (i == 2) cnt = 3;
        else if (i == 3) cnt = 5;
        else if (i == 4) cnt = 3;
        else cnt = 1;

        for (int j = 1; j <= cnt; j++) {
            printf("*\n");
        }

        if (i != 5) {
            printf("\n");
        }
    }

    return 0;
}



