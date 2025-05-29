#include <stdio.h>

int main(void) {
    char input, alphabet = 'A';

    printf("Please input a UPPER Alphabet: ");
    scanf("%c", &input);

    for (int i = 1; i <= (input - 'A' + 1); ++i) {
        for (int j = 1; j <= i; ++j) printf("%c", alphabet);
        ++alphabet;
        printf("\n");
    }

    return 0;
}