#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int array[] = {5, 2 ,9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    qsort(array, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}