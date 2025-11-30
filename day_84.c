// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* enum for the possible outcomes */
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN   /* for invalid input */
} Status;

/* Helper function:
   Convert input string to uppercase and match to enum values */
Status parse_status(char *s) {
    // Convert the whole string to uppercase so input is case-insensitive
    for (int i = 0; s[i]; i++) {
        s[i] = toupper(s[i]);
    }

    if (strcmp(s, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(s, "FAILURE") == 0) return FAILURE;
    if (strcmp(s, "TIMEOUT") == 0) return TIMEOUT;

    return UNKNOWN; // input didn't match any known status
}

int main(void) {
    char input[20];

    /* Read input without any prompt (required for automated tests) */
    if (scanf("%19s", input) != 1) {
        return 0; // nothing to read
    }

    /* Use helper to convert string → enum */
    Status st = parse_status(input);

    /* Messages indexed by enum values */
    const char *messages[] = {
        "Operation successful",
        "Operation failed",
        "Operation timed out"
    };

    /* Print correct message based on enum */
    switch (st) {
        case SUCCESS:
        case FAILURE:
        case TIMEOUT:
            printf("%s\n", messages[st]);
            break;

        case UNKNOWN:
            printf("Unknown status\n");
            break;
    }

    return 0;
}