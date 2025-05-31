#include <stdio.h>

int main(void) {
    char s1[100], s2[100];

    printf("String s1: ");
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; ++i) s2[i] = s1[i];

    s2[i] = '\0';
    printf("String s2: %s", s2);

    return 0;
}