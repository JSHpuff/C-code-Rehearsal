#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm time_info;
    char buffer[80];

    time_info.tm_year = 2025 - 1900;
    time_info.tm_mon = 5;
    time_info.tm_mday = 25;
    time_info.tm_hour = 4;
    time_info.tm_min = 3;
    time_info.tm_sec = 0;
    time_info.tm_isdst = -1;

    mktime(&time_info);

    strftime(buffer, sizeof(buffer), \
    "%Y-%m-%d %H:%M:%S", &time_info);
    printf("Custom time: %s\n", buffer);

    return 0;
}