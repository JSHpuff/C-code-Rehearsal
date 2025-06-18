#include <stdio.h>
#include <stdlib.h>

int main() {
    const int size = 10;

    // Allocate memory for an integer array
    // int *array = (int*)malloc(10 * sizeof(int));
    /* Better Codes */
    /** Avoids hardcoding type int
     *  Safer during type changes.
     */
    int *array = malloc(size * sizeof(*array));

    // if (array == NULL) {
    //     perror("Memory allocation failed");
    //     // return 1;
    //     /* Better Codes */
    //     return EXIT_FAILURE;
    // }
    /* Better Codes */
    /** fprintf:
     *  Allows full control of error wording.
     */
    if (!array) {
        fprintf(stderr, "Error: Memory allocation failed.\n");
        return EXIT_FAILURE;
    }

    // Initialize and print the array
    for (int i = 0; i < size; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    // return 0;
    /* Better Codes */
    return EXIT_SUCCESS;
}