#include <stdio.h>

int main(void1 {
    int base, exponent;
    long long result = 1;

    printf("The Base: ");
    scanf("%d", &base);

    printf("The Exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    printf("The result: %lld", result);

    return 0;
})