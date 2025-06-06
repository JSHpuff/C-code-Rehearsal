#include <stdio.h>

int main(void) {
    char operator;
    double firstNumber, secondNumber;

    printf("Please choose the operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Please input 2 integer: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch(operator) {
        case "+":
            printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        
        case "-":
            printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case "*":
            printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        
        case "/":
            printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}