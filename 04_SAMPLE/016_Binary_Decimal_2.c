#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main(void) {
    int n;
    printf("Enter a Decimal number:");
    scanf("%d", &n);

    printf("Decimal: %d convert to Binary: %lld\n", n, convertDecimalToBinary(n));

    return 0;
}

long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0) {
        remainder = n % 2;
        printf("Step %d: %d/2, rest: %d, answer: %d\n", step++, n, remander, n/2);
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    return binaryNumber
}