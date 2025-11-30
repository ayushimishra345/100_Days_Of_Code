// Q129: A file numbers.txt contains a list of integers separated by spaces. 
// Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/


#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int num, count = 0;
    int sum = 0;

    // Ask user for the file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1; // Exit program if file can't be opened
    }

    // Read integers until the end of the file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp); // Close file after reading

    // If no numbers were found, avoid division by zero
    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }

    // Calculate average
    float average = (float)sum / count;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}