#include <stdio.h>

/** Defines a struct Range representing a subarray to sort
 *  with start and end as indices.
 */
typedef struct _Range {
    int start, end;
} Range;

/** Helper Function
 *  return a new range with given start and end
 */
Range new_Range(int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[], const int len) {
    /** Avoids proceeding if the array is empty or length is invalid */
    if (len <= 0) {
        return;
    }

    /** Creates a stack r of Range objects
     *  Initializes with the full array range [0, len-1]
     */
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);

    /** Processes each range until the stack is empty */
    while (p > 0) {
        Range range = r[--p];
        if (range.start >= range.end) {
            continue;
        }

        int mid = arr[(range.start + range.end) / 2];
        int left = range.start, right = range.end;

        do {
            /** Moves elements smaller than pivot to the left and larger to the right */
            while (arr[left] < mid) ++left;
            while (arr[right] > mid) --right;

            if (left <= right) {
                swap(&arr[left], &arr[right]);
                left++;
                right--;
            }
        }while (left <= right);

        if (range.start < right) r[p++] = new_Range(range.start, right);
        if (range.end > left) r[p++] = new_Range(left, range.end);
    }
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