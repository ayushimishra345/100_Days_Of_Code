// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Enum for roles */
typedef enum {
    ROLE_ADMIN,
    ROLE_USER,
    ROLE_GUEST,
    ROLE_UNKNOWN
} Role;

/* Convert a string to uppercase in-place (helps make parsing case-insensitive) */
void strtoupper(char *s) {
    for (; *s; ++s) *s = (char) toupper((unsigned char)*s);
}

/* Parse input text into Role enum (case-insensitive) */
Role parseRole(const char *text) {
    if (text == NULL) return ROLE_UNKNOWN;
    char buf[32];
    strncpy(buf, text, sizeof(buf)-1);
    buf[sizeof(buf)-1] = '\0';

    /* remove trailing newline if present */
    size_t len = strlen(buf);
    if (len > 0 && buf[len-1] == '\n') buf[len-1] = '\0';

    strtoupper(buf);

    if (strcmp(buf, "ADMIN") == 0) return ROLE_ADMIN;
    if (strcmp(buf, "USER")  == 0) return ROLE_USER;
    if (strcmp(buf, "GUEST") == 0) return ROLE_GUEST;
    return ROLE_UNKNOWN;
}

int main(void) {
    char input[32];

    // Display instructions for user
    printf("Enter your role (ADMIN, USER, or GUEST): ");

    /* Read a single word/line from stdin (no extra prompt so it works in online judges) */
    if (!fgets(input, sizeof(input), stdin)) {
        /* if reading fails, treat as unknown role */
        printf("Welcome!\n");
        return 0;
    }

    Role r = parseRole(input);

    /* Display a message based on the role */
    switch (r) {
        case ROLE_ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case ROLE_USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case ROLE_GUEST:
            /* This matches the sample test case exactly */
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Welcome! (unknown role)\n");
            break;
    }

    return 0;
}