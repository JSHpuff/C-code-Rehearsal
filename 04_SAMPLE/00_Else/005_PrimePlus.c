#include <stdio.h>

int checkPrime(int n);

int main(void) {
    int n, flag = 0;

    printf("Please input a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n /2; ++i) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }

    if (flag == 0) printf("%d is not consist of 2 prime number.", n);

    return 0;
}

int checkPrime(int n) {
    int isPrime = 1;

    for (int i = 2; i <= n /2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}