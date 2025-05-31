#include <stdio.h>

struc TIME {
    int seconds;
    int minutes;
    int hours;
};

void TimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main(void) {
    struct TIME startTime, stoptime, diff;

    printf("Input the start time: \n");
    printf("Input hours, minutes and seconds: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Input the stop time: \n");
    printf("Input hours, minutes and seconds: ");
    scanf("%d %d %d", &stoptime.hours, &stoptime.minutes, &stoptime.seconds);

    TimePeriod(startTime, stoptime, &diff);

    printf("\nThe difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stoptime.hours, stoptime.minutes, stoptime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void TimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) {
    if (stop.seconds > start.seconds) {
        --start.minutes;
        start.second += 60;
    }

    diff -> seconds = start.seconds - stop.seconds;

    if (stop.minutes > start.minutes) {
        --start.hours;
        start.minutes += 60;
    }

    diff -> minutes = start.minutes - stop.minutes;
    diff -> hours = start.hours - stop.hours;
}