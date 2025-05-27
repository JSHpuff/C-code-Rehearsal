#include <stdio.h>

int gcd(int m, int n) {
    return (m % n) ? n : gcd(n, m % n);
}

void main(void) {
    int a, b, t, lcm;

    printf("Please input 2 positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Invalid input. Please input 2 positive integers.");
        return 1;
    }

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }

    t = gcd(a, b);
    printf("The Great Common Divisor of %d and %d is %d", a, b, t);

    lcm = (a * b) / t;
    printf("The Least Common Multiple of %d and %d is %d", a, b, lcm);
}