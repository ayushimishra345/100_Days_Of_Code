// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/


#include <stdio.h>

// enum for months (just to show usage of enum)
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

// structure for Date
struct Date {
    int day;
    enum Month month;  // using enum instead of plain int
    int year;
};

// Employee structure containing Date structure (nested structure)
struct Employee {
    char name[50];
    int id;
    struct Date joinDate;   // nested structure
};

int main() {
    struct Employee emp;

    // Taking input
    // Sample Input: Raj 11 12 05 2020
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, (int*)&emp.joinDate.month, &emp.joinDate.year);

    // Output in required format
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d",
           emp.name,
           emp.id,
           emp.joinDate.day,
           emp.joinDate.month,
           emp.joinDate.year);

    return 0;
}