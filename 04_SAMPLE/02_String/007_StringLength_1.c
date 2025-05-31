#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int len;

    printf("Input the string: ");
    scanf("%s", &s);

    printf("The length: %d", strlen(s));

    return 0;
}