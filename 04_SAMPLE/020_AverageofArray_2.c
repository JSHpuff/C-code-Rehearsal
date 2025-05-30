#include <stdio.h>

int main(void) {
    int n;
    float num[100], sum = 0.0, average;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0) {
        printf("Error! Number should be within 1 to 100.\n");
        printf("Please Enter again.\n");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d. input the number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf("The average: %.2f", average);

    return 0;
}