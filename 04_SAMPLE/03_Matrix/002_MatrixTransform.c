#include <stdio.h>

int main(void) {
    int a[10][10], transpose[10][10], r, c;

    printf("Please input the ROWS and COLUMNS: ");
    scanf("%d %d", &r, &c);

    printf("\nPlease input the matrix elements: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Input the elements a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe input matrix: \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", a[i][j]);
            if (j == c - 1) printf("\n\n");
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) transpose[j][i] = a[i][j];
    }

    printf("\nAfter transform: \n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1) printf("\n\n");
        }
    }

    return 0;
}