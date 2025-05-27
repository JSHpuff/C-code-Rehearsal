#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int n1, n2, lcm;

    printf("Please input 2 positive integer: ");
    if (scanf("%d %d", &n1, &n2) != 2 || n1 <= 0 || n2 <= 0) {
        printf("Invalid input. Please input 2 positive integers.\n");
        return 1;
    }
    
    lcm = (n1 * n2) / gcd(n1, n2);
    printf("The Least Common Multiple of %d and %d is : %d", n1, n2, lcm);

    return 0;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}