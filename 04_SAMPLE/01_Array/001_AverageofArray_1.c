#include <stdio.h>

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sum;
    float avg;

    sum = avg = 0;

    for (int loop = 0; loop < 10; loop++) {
        sum += array[loop]
    }

    avg = (float)sum / loop;

    printf("Average: %.2f, avg");

    return 0;
}