#include <stdio.h>

int main(void) {
    int rows;

    printf("Row number: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) printf("* ");
        printf("\n");
    }

    return 0;
}