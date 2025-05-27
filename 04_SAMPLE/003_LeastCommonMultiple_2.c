#include <stdio.h>

int findLCM(int a, int b) {
    int minMultiple = (a < b)  ? a : b;

    while (1) {
        if (minMultiple % a == 0 && minMultiple % b == 0) return minMultiple;
        ++minMultiple;
    }
}

int main(void) {
    int n1, n2;

    printf("Please input 2 positive integers: ");
    if (scanf("%d %d", &n1, &n2) != 2 || n1 <= 0 || n2 <= 0) {
        printf("Invalid input. Please enter 2 positive integers.\n");
        return 1;
    }

    int lcm = findLCM(n1, n2);
    printf("The Least Common Multiple of %d and %d is: %d\n", n1, n2, lcm);

    return 0;
}