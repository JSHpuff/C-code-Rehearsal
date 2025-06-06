#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end) return;

    int mid = arr[end];
    int left = start, right = end - 1;

    while (left < right) {
        while (left < right && arr[left] < mid) left++;
        while (left < right && arr[right] >= mid) right--;
        swap(&arr[left], &arr[right]);
    }

    if (arr[left] >= arr[end]) swap(&arr[left], &arr[end]);
    else left++;

    quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort(int arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}

int main(void) {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}