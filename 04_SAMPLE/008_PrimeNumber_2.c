#include <stdio.h>

int main(void) {
    int low, high, flag;

    print("Please input 2 positive integer: ");
    scanf("%d %d", &low, &high);

    printf("The Prime Number between %d and %d is: ", low, high);

    while (low < high) {
        flag = 0;

        for (int i = 2; i <= low/2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) printf("%d", low);

        ++low;
    }

    return 0;
}