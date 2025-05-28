#include <stdio.h>

int main(void) {
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Please input a positive integer: ");
    scanf("%d", &n);

    originalInteger = n;

    while (n != 0) {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    if (originalInteger == reversedInteger) {
        printf("%d is palindrome", originalInteger);
    }else {
        printf("%d is not palindrome", originalInteger);
    }

    return 0;
}