/** Using while and if to find out the great common divisor */

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Please input 2 number and seperate by space: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2) {
        if (n1 > n2) n1 -= n2;
        else n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}