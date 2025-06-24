#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** Better Codes */
#define NUM_RANDOMS 10
#define MAX_RANDOM_VALUE 100

int main(void) {
    // srand(time(NULL));
    /** Better Codes
     *  create a random seed
     */
    srand((unsigned int)time(NULL));

    // for (int i = 0; i < 10; i++) {
    /** Better Codes */
    for (int i = 0; i < NUM_RANDOMS; i++) {
        // printf("%d ", rand() % 100);
        /** Better Codes
         *  rand(): 0 ~ 32767
         *  rand() % 100 = 0 ~ 99
         */
        printf("%d ", rand() % MAX_RANDOM_VALUE);
    }
    // printf("\n");
    /** Better Codes
     *  putchar: 
     *  - print a single character
     *  - the speed is faster than printf
     */
    putchar("\n");

    return 0;
}