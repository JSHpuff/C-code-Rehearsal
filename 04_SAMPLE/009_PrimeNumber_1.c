#include <stdio.h>

int main(void) {
    int n, i, flag = 0;

    printf("Please input a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i < n/2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n <= 1) {
        flag = 1;
    }

    if (flag == 0) printf("%d is Prime Number", n);
    else printf("%d is not a Prime Number", n);

    return 0;
}