#include <stdio.h>

int main(void) {
    int rows;

    printf("Please input row number: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) printf("%d ", j);
        printf("\n");
    }

    return 0;
}