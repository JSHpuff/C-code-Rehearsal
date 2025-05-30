#include <stdio.h>

void reverseSentence(void);

int main(void) {
    printf("Please input a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence(void) {
    char c;
    scanf("%c", &c);

    if ( c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}