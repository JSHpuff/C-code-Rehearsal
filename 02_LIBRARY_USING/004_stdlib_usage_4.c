#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    // return (*(int*)a - *(int*)b);
    // Better Safe
    int a_val = *(int*)a;
    int b_val = *(int*)b;
    if (a_val < b_val) return -1;
    else if (a_val > b_val) return 1;
    else return 0;
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