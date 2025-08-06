#include <stdio.h>

int main(void) {
    int number;

    printf("Please input a positive integer: ");
    scanf("%d", &number);

    printf("The factor of %d is: ", number);

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) printf("%d ", i);
    }

    return 0;
}