#include <stdio.h>

int main(void) {
    long long n;
    int count = 0;

    printf("Please input a positive integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        n /= 10;
        ++count;
    }

    printf("The number is %d of digits", count);
}