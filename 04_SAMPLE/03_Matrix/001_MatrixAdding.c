#include <stdio.h>

int main(void) {
    int r, c, a[100][100], b[100][100], sum[100][100];

    printf("Input the ROWS (1-100): ");
    scanf("%d", &r);

    printf("Input the COLUMNS (1-100): ");
    scanf("%d", &c);

    printf("\nPlease input the first matrix elements: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Input the elements a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Please input the second matrix elements: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Input the elements b%d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) sum[i][j] = a[i][j] + b[i][j];
    }

    printf("\nThe result of Sum of the matrix: \n\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d  ", sum[i][j]);
            if (j == c - 1) printf("\n\n");
        }
    }

    return 0;
}