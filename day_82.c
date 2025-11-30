// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/


#include <stdio.h>
#include <string.h>

// Define an enum for traffic light states
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    printf("Enter traffic light color (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    enum TrafficLight light;

    // Convert input string to enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        // If input is invalid
        printf("Invalid input\n");
        return 0;
    }

    // Print message based on enum value
    if (light == RED) {
        printf("Stop");
    } else if (light == YELLOW) {
        printf("Wait");
    } else if (light == GREEN) {
        printf("Go");
    }

    return 0;
}