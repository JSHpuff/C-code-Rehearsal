#include <stdio.h>

int power(int n1, int n2);

int main(void) {
    int base, powerRaised, result;

    printf("Base: ");
    scanf("%d", &base);

    printf("Exponent: ");
    scanf("%d", &powerRaised);

    result = power(base, powerRaised);

    printf("%d^%d = %d", base, powerRaised, result);

    return 0;
}

int power(int base, int powerRaised) {
    return (powerRaised != 0) ? (base * power(base, powerRaised - 1)) : 1;
}