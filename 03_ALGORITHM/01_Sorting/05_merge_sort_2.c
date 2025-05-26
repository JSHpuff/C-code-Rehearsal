#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge_sort_recursive(int arr[], int reg[], int start, int end);
void merge_sort(int arr[], const int len);

int main(void) {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void merge_sort_recursive(int arr[], int reg[], int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;

    merge_sort_recursive(arr, reg, start1, end1);
    merge_sort_recursive(arr, reg, start2, end2);

    int k = start;
    while (start1 <= end1 && start2 <= end2) {
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    }
    while (start1 <= end1) {
        reg[k++] = arr[start1++];
    }
    while (start2 <= end2) {
        reg[k++] = arr[start2++];
    }

    memcpy(arr + start, reg + start, (end - start + 1) * sizeof(int));
}

void merge_sort(int arr[], const int len) {
    int* reg = (int*)malloc(len * sizeof(int));
    if (reg == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    merge_sort_recursive(arr, reg, 0, len - 1);
    free(reg);
}