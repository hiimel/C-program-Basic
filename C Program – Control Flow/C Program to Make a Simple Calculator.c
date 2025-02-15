// using if else statement
#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    scanf("%lf", &num1);

    scanf(" %c", &op);

    scanf("%lf", &num2);

    if(op == '+') {
        result = num1 + num2;
        printf("Sum is: %.2lf\n", result);
    } else if(op == '-') {
        result = num1 - num2;
        printf("Subtraction is: %.2lf\n", result);
    } else if(op == '*') {
        result = num1 * num2;
        printf("Multiplication is: %.2lf\n", result);
    } else if(op == '/') {
        if(num2 != 0) {
            result = num1 / num2;
            printf("Division is: %.2lf\n", result);
        } else {
            printf("Error! Division by zero is not possible\n");
        }
    } else {
        printf("Invalid operator!\n");
    }
    return 0;
}
