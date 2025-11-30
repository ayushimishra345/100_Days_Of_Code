// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/


#include <stdio.h>
#include <string.h>

// Creating an enum for months
enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {

    char input[10];
    printf("Enter month (e.g., JAN, FEB, ...): ");
    scanf("%s", input);   // Reading month in string form

    enum Month m;

    // Convert input string to enum value
    if (strcmp(input, "JAN") == 0) m = JAN;
    else if (strcmp(input, "FEB") == 0) m = FEB;
    else if (strcmp(input, "MAR") == 0) m = MAR;
    else if (strcmp(input, "APR") == 0) m = APR;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUN") == 0) m = JUN;
    else if (strcmp(input, "JUL") == 0) m = JUL;
    else if (strcmp(input, "AUG") == 0) m = AUG;
    else if (strcmp(input, "SEP") == 0) m = SEP;
    else if (strcmp(input, "OCT") == 0) m = OCT;
    else if (strcmp(input, "NOV") == 0) m = NOV;
    else if (strcmp(input, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month\n");
        return 0;
    }

    // Printing number of days based on enum
    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case NOV:
            printf("31 days");
            break;

        case APR: case JUN: case SEP: case DEC:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");   // Matches sample output
            break;
    }

    return 0;
}