#include <stdio.h>
#include <math.h>

long long convertOctalToDecimal(int octalNumber);

int main(void) {
    int octalNumber;

    printf("Please input a Octal Number: ");
    scanf("%d", &octalNumber);

    printf("Octal %d convert to Decimal: %lld", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    return decimalNumber;
}