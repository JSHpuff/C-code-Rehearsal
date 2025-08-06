#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Please input 1 positive integer (<= 20): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 20) {
        printf("Invalid input. Please input 1 positive integer.\n");
        return 1;
    }

    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
    printf("%d! = %llu", n, factorial);

    return 0;
}