#include <stdio.h>

int main(void) {
    int i , n, t1 = 0, t2 = 1, nextTerm;
    printf("Output number: ");
    scanf("%d", &n);

    printf("The Fibonacci array: ");

    for (i = 1; i < n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}