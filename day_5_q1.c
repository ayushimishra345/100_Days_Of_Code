// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/


#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, amount, compoundInterest;

    /* Prompt the user for input */
    printf("Enter principal amount, annual rate (%%), and time (years), separated by spaces:\n");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    /* Calculate Simple Interest */
    simpleInterest = (principal * rate * time) / 100.0;

    /* Calculate Amount after Compound Interest */
    amount = principal * pow(1 + rate / 100.0, time);

    /* Compound Interest = Amount – Principal */
    compoundInterest = amount - principal;

    /* Display results */
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
           simpleInterest, compoundInterest);

    return 0;
}


