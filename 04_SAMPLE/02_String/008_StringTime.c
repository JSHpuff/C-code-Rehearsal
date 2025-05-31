#include <stdio.h>

int main(void) {
    char str[1000], ch;
    int frequency = 0;

    printf("Input string: ");
    fgets(str, (sizeof str / sizeof str[0]), stdin);

    printf("Input finding char: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i]) ++frequency;
    }

    printf("The char %c time: %d", ch, frequency);

    return 0;
}