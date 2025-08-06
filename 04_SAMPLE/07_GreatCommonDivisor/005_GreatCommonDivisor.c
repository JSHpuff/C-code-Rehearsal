#include <stdio.h>

int main(void) {
    int a, b, t;
    
    printf("Please input 2 numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
        printf("a = %d, b = %d, t = %d\n", a, b, t);
    }

    printf("The great common divisor is : %d\n", a);

    return 0;
}