/** Using while loop and if condition to find out least common multiple */

#include <stdio.h>

int main(void) {
    int n1, n2, minMultiple;

    printf("Please input 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    minMultiple = (n1 > n2) ? n1 : n2;

    while (1) {
        if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
            printf("%d and %d 's least common multiple is : %d", n1, n2, minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}