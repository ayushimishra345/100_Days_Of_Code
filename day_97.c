// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Define an enum for gender 
typedef enum {
    MALE = 0,
    FEMALE = 1,
    OTHER = 2
} Gender;

// Employee structure 
typedef struct {
    int id;
    char name[50];
    Gender gender;
    float salary;
} Employee;

// Helper to print gender as text 
const char *gender_to_string(Gender g) {
    if (g == MALE)   return "Male";
    if (g == FEMALE) return "Female";
    return "Other";
}

/* Helper to trim newline from fgets */
void trim_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';
}

int main(void) {
    Employee emp;
    FILE *fp;

    // Ask user for employee details
    printf("Enter employee id: ");
    if (scanf("%d", &emp.id) != 1) {
        fprintf(stderr, "Invalid input for id.\n");
        return 1;
    }

    // consume leftover newline before using fgets 
    getchar();

    printf("Enter employee name: ");
    if (fgets(emp.name, sizeof(emp.name), stdin) == NULL) {
        fprintf(stderr, "Error reading name.\n");
        return 1;
    }
    trim_newline(emp.name);

    printf("Select gender (0 = Male, 1 = Female, 2 = Other): ");
    int g;
    if (scanf("%d", &g) != 1 || g < 0 || g > 2) {
        fprintf(stderr, "Invalid gender option.\n");
        return 1;
    }
    emp.gender = (Gender)g;

    printf("Enter salary: ");
    if (scanf("%f", &emp.salary) != 1) {
        fprintf(stderr, "Invalid input for salary.\n");
        return 1;
    }

    // Open binary file for writing 
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        perror("Unable to open file for writing");
        return 1;
    }

    // Write the employee struct to the file
    if (fwrite(&emp, sizeof(Employee), 1, fp) != 1) {
        fprintf(stderr, "Error writing to file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    printf("Employee details entered and stored in file.\n\n");

    // Open binary file for reading and display the stored record
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        perror("Unable to open file for reading");
        return 1;
    }

    Employee read_emp;
    if (fread(&read_emp, sizeof(Employee), 1, fp) != 1) {
        fprintf(stderr, "Error reading from file or file empty.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    // Display the employee data read from file
    printf("Employee data read from file:\n");
    printf("-----------------------------\n");
    printf("ID     : %d\n", read_emp.id);
    printf("Name   : %s\n", read_emp.name);
    printf("Gender : %s\n", gender_to_string(read_emp.gender));
    printf("Salary : %.2f\n", read_emp.salary);

    return 0;
}