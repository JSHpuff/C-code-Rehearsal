#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("test.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", c);

    printf("Read content: \n%s", c);
    fclose(fptr);

    return 0;
}