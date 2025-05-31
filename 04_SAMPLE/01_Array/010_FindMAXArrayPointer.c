#include <stdio.h>
#include <math.h>

int main(void) {
    int num;
    float *data;

    printf("Please input element number (1 - 100): ");
    scanf("%d", &num);

    data = (float*)calloc(num, sizeof(float));
    if (data == NULL) {
        printf("Error! Memory not allocated!");
        exit(0);
    }

    printf("\n");

    for (int i = 0; i < num; ++i) {
        printf("Input number %d: ", i + 1);
        scanf("%f", data + i);
    }

    for (int i = 1; i < num; ++i) {
        if (*data < *(data + i)) *data = *(data + i);
    }

    printf("The maximum: %.2f", *data);

    return 0;
}