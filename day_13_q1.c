// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter two integers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero\n");
                return 1;
            }
            result = num1 % num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}



