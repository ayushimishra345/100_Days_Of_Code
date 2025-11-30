// Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/



#include <stdio.h>

/* Define an enum for status codes.
 * By default the first constant has value 0 and each next increments by 1.
 */
enum Status {
    SUCCESS,  /* 0 */
    FAILURE,  /* 1 */
    TIMEOUT   /* 2 */
};

int main(void) {
    /* Print the integer values of the enum constants */
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}