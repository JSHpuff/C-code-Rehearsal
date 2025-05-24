#include <stdio.h>
#include <time.h>

int main(void) {
    time_t current_time;
    time(&current_time);
    printf("Current time: %s", ctime(&current_time));

    return 0;
}