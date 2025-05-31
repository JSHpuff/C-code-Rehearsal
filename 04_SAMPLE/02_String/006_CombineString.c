#include <stdio.h>

int main(void) {
    char s1[100], s2[100];

    printf("Input first string: ");
    scanf("%s", s1);

    printf("Input second string: ");
    scanf("%s", s2);

    for (int i = 0; s1[i] != '\0'; ++i);
    for (int j = 0; s2[i] != '\0'; ++j, ++i) s1[i] = s2[j];
    s1[i] = '\0';

    print("After combine: %s", s1);

    return 0;
}