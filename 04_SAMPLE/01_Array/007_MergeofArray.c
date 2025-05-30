#include <stdoi.h>

int main(void) {
    int array[10];
    int even[5] = {0, 2, 4, 6, 8};
    int odd[5] = {1, 3, 5, 7, 9};
    int index = 0, e_len = 5, o_len = 5;

    for (int loop = 0; loop < e_len; loop++) {
        array[index] = even[loop];
        index++;
    }

    for (int loop = 0; loop < o_len; loop++) {
        array[index] = odd[loop];
        index++;
    }

    printf("\nEven -> ");
    for (int loop = 0; loop < e_len; loop++) printf(" %d", even[loop]);

    printf("\nOdd -> ");
    for (int loop = 0; loop < o_len; loop++) printf(" %d", odd[loop]);

    printf("\nMerge Array -> ");
    for (int loop = 0; loop < 10; loop++) printf(" %d", array[loop]);

    return 0;
}