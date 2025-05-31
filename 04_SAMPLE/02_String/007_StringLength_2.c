#include <stdio.h>

int main(void) {
    char s[1000];

    printf("Input string: ");
    scanf("%s", &s);

    for (int i = 0; s[i] != '\0'; ++i);
    printf("The length: %d", i);

    return 0;
}