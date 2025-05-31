#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char sentence[1000];
    FILE *fptr;

    fptr = fopen("test.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    printf("Input the string: \n");
    fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return 0;
}