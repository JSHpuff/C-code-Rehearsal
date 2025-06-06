#include <stdio.h>

int main(void) {
    int rows, k = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i, k = 0) {
        for (int space = 1; space <= rows - i; ++space) printf(" ");
        
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}