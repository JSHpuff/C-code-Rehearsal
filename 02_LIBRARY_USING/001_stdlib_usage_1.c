#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SIZE = 10;
    // int *array = (int*)malloc(10 * sizeof(int));
    /* Better Codes */
    /** Avoids hardcoding type int
     *  Safer during type changes.
     */
    int *array = malloc(SIZE * sizeof(*array));

    if (array == NULL) {
        perror("Memory allocation failed");
        // return 1;
        /* Better Codes */
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 10; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    // return 0;
    /* Better Codes */
    return EXIT_SUCCESS;
}