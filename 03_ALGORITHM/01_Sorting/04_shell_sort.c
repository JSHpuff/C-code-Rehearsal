#include <stdio.h>

void shell_sort(int arr[], int len);

int main(void) {
    int arr[] = {22, 34, 3 ,32, 82, 55, \
        89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(arr[0]);

    shell_sort(arr, len);

    for (int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void shell_sort(int arr[], int len) {
    for (int gap = len / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < len; i++) {
            int temp = arr[i];
            int j = i;
            
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -=gap;
            }
            arr[j] = temp;
        }
    }
}