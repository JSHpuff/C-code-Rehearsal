#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start_time, end_time;
    double time_diff;

    time(&start_time);
    
    for (int i = 0; i < 100000000; i++);

    time(&end_time);
    time_diff = difftime(end_time, start_time);
    printf("Time difference: %.2f seconds\n", time_diff);

    return 0;
}