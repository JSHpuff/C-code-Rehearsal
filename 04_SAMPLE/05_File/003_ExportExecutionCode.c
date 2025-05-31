#include <stdio.h>

int main(void) {
    FILE *fp;
    char c;

    fp = fopen(__FILE__, "r");
    
    do {
        c = getc(fp);
        putchar(c);
    } while (c != EOF); // EOF: end of line

    fclose(fp);

    return 0;
}