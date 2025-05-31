#include <stdio.h>

int c = 0;          /** count of people who got off */
int i = 1;          /** current index (1-30) */
int j = 0;          /** current counting */
int b[30] = {0};    /** 0 = on boat, 1 = got off */

int main(void) {
    while ( i <= 31) {
        if (i == 31) i = 1;
        else if (c == 15) break;
        else {
            if (b[i] != 0) {
                i++;
                continue;
            } else {
                b[i] = 1;
                j = 0;
                printf("No. %d is getting off boat.\n", i);
                i++;
                c++;
            }
        }
    }
}