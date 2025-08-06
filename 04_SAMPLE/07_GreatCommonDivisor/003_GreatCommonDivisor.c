/** Using Positive and Negative number finding out the great common divisor */

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Please input 2 numbers and seperate by space: ");
    scanf("%d %d", &n1, &n2);

    n1 = (n1 > 0) ? n1 : -n1;
    n2 = (n2 > 0) ? n2 : -n2;

    while (n1 != n2) {
        if (n1 < n2) n1 -= n2;
        else n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}