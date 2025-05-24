#include <stdio.h>
#include <time.h>

int main(void) {
    time_t current_time;
    struct tm *time_info;
    char buffer[80];

    time(&current_time);
    time_info = localtime(&current_time);

    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time_info);
    printf("Formatted time: %s\n", buffer);

    return 0;
}