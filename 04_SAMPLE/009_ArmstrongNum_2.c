#include <stdio.h>
#include <math.h>

int main(void) {
    int low, high, temp1, temp2, remainder, n = 0, result = 0;

    printf("Please input 2 positive integer: ");
    scanf("%d %d", &low, &high);

    pprintf("The Armstrong number between %d and %d is: ", low, high);

    for (int i = low + 1; i < high; ++i) {
        temp1 = i;
        temp2 = i;

        while (temp != 0) {
            temp1 /= 10;
            ++n;
        }

        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        if (result == i) printf("%d", i);

        n = 0;
        result = 0;
    }

    return 0;
}