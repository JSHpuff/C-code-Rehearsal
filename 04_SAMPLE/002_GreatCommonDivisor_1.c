/** Using for and if to complete great common divisor */

#include <stdio.h>

int main(void) {
    int n1, n2, gcd;

    printf("Please input two integer and seperate by space: ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    printf("%d and %d 's great common divisor is : %d", n1, n2, gcd);

    return 0;
}