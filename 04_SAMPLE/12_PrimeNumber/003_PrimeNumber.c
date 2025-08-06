#include <stdio.h>

int checkPrimeNumber(int n);

int main(void) {
    int n1, n2, flag;

    printf("Please input 2 positive integer: ");
    scanf("%d %d", &n1, &n2);

    printf("The Prime Number between %d and %d is: ", n1, n2);

    for (int i = n1 + 1; i < n2; ++i) {
        flag = checkPrimeNumber(i);
        if (flag == 1) printf("%d", i);
    }

    return 0;
}

int checkPrimeNumber(int n) {
    int flag = 1;

    for (int j = 2; j <= n/2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}