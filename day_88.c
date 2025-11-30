// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

//  Enum for traffic light colors.
//  Values start at 0 by default: RED=0, YELLOW=1, GREEN=2.
//  We add LIGHT_COUNT to know how many items are there.
enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    LIGHT_COUNT  // always keep this last to know the enum size
};

// Strings that correspond to the enum values above.
//  Keep the order exactly the same as the enum.
const char *TrafficLightNames[] = {
    "RED",
    "YELLOW",
    "GREEN"
};

int main(void)
{
    // Loop from 0 .. LIGHT_COUNT-1 and print "NAME=value" 
    for (int i = 0; i < LIGHT_COUNT; ++i) {
        printf("%s=%d\n", TrafficLightNames[i], i);
    }

    return 0;
}