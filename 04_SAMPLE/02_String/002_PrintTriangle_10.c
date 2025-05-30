#include <stdio.h>

#define N 10

int main(void) {
    for (int i = 1, j = 1; i <= N; i++) {
        for (int l = 1; l <= i; l++, j++) printf("%5d", j);
        printf("\n");
    }

    return 0;
}