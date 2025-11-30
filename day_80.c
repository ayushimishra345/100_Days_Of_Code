// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
// Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/


#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    int n;

    // Ask user for file name
    printf("Enter file name to store student records: ");
    scanf("%s", filename);

    // Open file in write mode
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many student records do you want to enter? ");
    scanf("%d", &n);

    // Store student data into file
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll, marks;

        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        printf("Enter Marks: ");
        scanf("%d", &marks);

        // Write to file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);  // Done writing

    // Now read the file and display contents
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    char name[50];
    int roll, marks;

    // Read each line and display
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}