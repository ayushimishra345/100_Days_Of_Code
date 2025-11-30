// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/


#include <stdio.h>
#include <string.h>

int main() {
    char date[11];  // Array to store date string (10 chars + null)
    char month[4];  // Array to store month abbreviation

    // Read input date in dd/mm/yyyy format
    scanf("%s", date);
    
    // Extract month number (characters at index 3,4)
    char monthNum[3];
    monthNum[0] = date[3];
    monthNum[1] = date[4];
    monthNum[2] = '\0';
    
    // Convert month number to abbreviation
    switch(atoi(monthNum)) {
        case 1: strcpy(month, "Jan"); break;
        case 2: strcpy(month, "Feb"); break;
        case 3: strcpy(month, "Mar"); break;
        case 4: strcpy(month, "Apr"); break;
        case 5: strcpy(month, "May"); break;
        case 6: strcpy(month, "Jun"); break;
        case 7: strcpy(month, "Jul"); break;
        case 8: strcpy(month, "Aug"); break;
        case 9: strcpy(month, "Sep"); break;
        case 10: strcpy(month, "Oct"); break;
        case 11: strcpy(month, "Nov"); break;
        case 12: strcpy(month, "Dec"); break;
    }
    
    // Print reformatted date
    printf("%.2s-%s-%.4s\n", date, month, &date[6]);
    
    return 0;
}


