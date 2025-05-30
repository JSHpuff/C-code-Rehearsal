#include <stdio.h>
#include <math.h>

long long convertOctalToBinary(int octalNumber);

int main(void) {
    int octalNumber;

    printf("Enter a Octal: ");
    scanf("%d", &octalNumber);

    printf("Octal %d convert to Binary: %lld", octalNumber,\
        convertOctalToBinary(octalNumber));

    return 0;
}

long long convertOctalToBinary(int octalNumber) {
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    i = 1;

    while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}