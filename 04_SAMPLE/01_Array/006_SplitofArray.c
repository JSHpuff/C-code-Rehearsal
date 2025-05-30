#include <stdio.h>

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int even[10], odd[10];
    int e = 0, d = 0;

    for (int loop = 0; loop < 10; loop++) {
        if (array[loop] % 2 == 0) {
            even[e] = array[loop];
            e++;
        } else {
            odd[d] = array[loop];
            d++;
        }
    }

    printf("The Original Array: ");
    for (int loop = 0; loop < 10; loop++) printf(" %d", array[loop]);

    printf("\n Even -> ");
    for (int loop = 0; loop < e; loop++) printf(" %d", even[loop]);

    printf("\n Odd -> ");
    for (int loop = 0; loop < d; loop++) printf(" %d", odd[loop]);

    return 0;
}