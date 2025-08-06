#include <stdio.h>

unsigned long long multiplyNumbers(int n);

int main(void) {
    int n;

    printf("Please input 1 positive integer (<= 20): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 20) {
        printf("Invalid input. Please input 1 positive integer <= 20.\n");
        return 1;
    }

    printf("%d! = %ld", n, multiplyNumbers(n));

    return 0;
}

unsigned long long multiplyNumbers(int n) {
    return (n > 1) ? (unsigned long long)n*multiplyNumbers(n - 1) : 1;
}