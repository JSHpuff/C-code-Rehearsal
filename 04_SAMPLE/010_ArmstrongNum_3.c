#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main(void) {
    int n, flag;

    printf("Please input a positive integer: ");
    scanf("%d", &n);

    flag = checkPrimeNumber(n);
    if (flag == 1) printf("%d is Prime Number.\n", n);
    else printf("%d is not Prime Number.\n", n);

    flag = checkArmstrongNumber(n);
    if (flag == 1) printf("%d is Armstrong Number.\n", n);
    else printf("%d is not a Armstrong Number.\n", n);

    return 0;
}

int checkPrimeNumber(int n) {
    int flag = 1;

    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}

int checkArmstrongNumber(int n) {
    int originalNumber, remainder, result = 0, n = 0, flag;

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) flag = 1;
    else flag = 0;

    return flag;
}