// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Define an enum for gender values */
typedef enum {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
} Gender;

// A simple struct to represent a person.
// We include a name field to show how a struct can hold multiple fields.

typedef struct {
    char name[50];
    Gender gender;
} Person;

// Convert enum Gender to a human-friendly string
const char* gender_to_string(Gender g) {
    switch (g) {
        case MALE:    return "Male";
        case FEMALE:  return "Female";
        case OTHER:   return "Other";
        default:      return "Unknown";
    }
}

int main(void) {
    char line[100];
    char token[100];
    Person p;

    // Initialize struct (student-style default)
    strcpy(p.name, "Unknown"); // not used for input here, but shows usage
    p.gender = UNKNOWN;

    // Display instructions for user
    printf("Enter gender (format: Gender=MALE or Gender=FEMALE or Gender=OTHER): ");

    /* Read one line from stdin, e.g. "Gender=MALE" */
    if (fgets(line, sizeof(line), stdin) == NULL) {
        /* no input given */
        return 0;
    }

    // Try to parse "Gender=<WORD>" from the line
    if (sscanf(line, "Gender=%99s", token) != 1) {
        // If parsing fails, print Unknown and exit
        printf("%s\n", gender_to_string(UNKNOWN));
        return 0;
    }

    // Normalize token to uppercase so input is case-insensitive
    for (size_t i = 0; token[i]; ++i) token[i] = (char) toupper((unsigned char)token[i]);

    // Map token text to enum value
    if (strcmp(token, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(token, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(token, "OTHER") == 0 || strcmp(token, "NON-BINARY") == 0) {
        p.gender = OTHER;
    } else {
        p.gender = UNKNOWN;
    }


    // Print the human-friendly gender string 
    printf("%s\n", gender_to_string(p.gender));

    return 0;
}