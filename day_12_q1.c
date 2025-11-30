// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/


#include <stdio.h>

int main() {
    int daysLate;
    int fine;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 5) {
        fine = daysLate * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 10) {
        fine = daysLate * 4;
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 30) {
        fine = daysLate * 6;
        printf("Fine ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}

