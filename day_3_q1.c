// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // take input from user
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // our result
    printf("Fahrenheit=%.2f\n", fahrenheit);

    return 0;
}


