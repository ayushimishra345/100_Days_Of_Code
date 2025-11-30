// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/


#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // Prompt the user for input
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    }
    else if (delta == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and same: %g\n", root);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}

