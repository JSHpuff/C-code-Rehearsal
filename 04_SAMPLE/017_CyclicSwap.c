#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main(void) {
    int a, b, c;

    printf("Please input a, b and c value: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before: \n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("After: \n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    return 0;
}

void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}