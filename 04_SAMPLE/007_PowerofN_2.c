#include <stdio.h>

int main(void) {
    double base, exponent, result;

    printf("Base: ");
    scanf("%lf", &base);

    printf("Exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.1lf^%.1lf = %.2lf", base, exponent, result);

    return 0;
}