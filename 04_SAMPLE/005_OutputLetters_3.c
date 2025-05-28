#include <stdio.h>

int main(void) {
    char letter = 'a';

    for (int i = 0; i < 26; i++) {
        printf("%c ", letter);
        letter++;
    }

    printf("\n");

    return 0;
}