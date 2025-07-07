#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main() {
    const char *str = "12345";
    char *endptr;
    errno = 0;

    long val = strtol(str, &endptr, 10);
    
    if (errno == ERANGE || val > INT_MAX || val < INT_MIN) {
        perror("Integer overflow/underflow");
        return EXIT_FAILURE;
    }

    if (*endptr != '\0') {
        fprintf(stderr, "Invalid characters found: '%s'\n", endptr);
        return EXIT_FAILURE;
    }

    printf("The integer value is %d\n", (int)val);

    return 0;
}