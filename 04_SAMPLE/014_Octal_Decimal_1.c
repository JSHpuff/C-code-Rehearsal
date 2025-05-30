#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int decimalNumber);

int main(void) {
    int decimalNumber;

    printf("Enter a Decimal: ");
    scanf("%d", decimalNumber);

    printf("Decimal: %d convert to Octal: %", decimalNumber, convertDecimalToOctal(decimalNumber));

    return 0;
}

int convertDecimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}