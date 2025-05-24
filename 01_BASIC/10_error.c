#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(void) {
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Error Code: %d\n", errno);
        perror("Pass perror:");
        fprintf(stderr, "Open the file error: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }

    return 0;
}