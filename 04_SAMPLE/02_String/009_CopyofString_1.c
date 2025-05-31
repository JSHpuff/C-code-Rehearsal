#include <stdio.h>
#include <string.h>

int main(void) {
    char src[40], dest[100];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "This is a test.");
    strcpy(dest, src);

    printf("The output string: %s\n", dest);

    return 0;
}