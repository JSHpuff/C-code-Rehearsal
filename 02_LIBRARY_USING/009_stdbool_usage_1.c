#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool isReady = true;
    bool isFinished = false;

    if (isReady) {
        printf("The system is ready.\n");
    } else {
        printf("The system is not ready.\n");
    }

    if (!isFinished) {
        printf("The task is not finished.\n");
    }

    printf("isReady: %d\n", isReady);
    printf("isFinished: %d\n", isFinished);

    return 0;
}