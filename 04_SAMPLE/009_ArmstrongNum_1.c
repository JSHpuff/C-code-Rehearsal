#include <stdio.h>

int main(void) {
    int number, originalNumber, remainder, result = 0;

    printf("Please input a 3-digits number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        printf("remainder: %d", remainder);
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number) printf("%d is Armstrong Number", number);
    else printf("%d is not a Armstrong Number", number);

    return 0;
}