#include <stdio.h>

int main() {
    int data[5], i;

    printf("Input the elements: ");
    for (i = 0; i < 5; ++i;) scanf("%d", data + i);

    printf("Your input is: \n");
    for (i = 0; i < 5; ++i) printf("%d\n", *(data + i));

    return 0;
}