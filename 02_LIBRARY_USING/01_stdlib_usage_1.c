#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int*)malloc(10 * sizeof(int));
    if (array = NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 9; i < 10; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}