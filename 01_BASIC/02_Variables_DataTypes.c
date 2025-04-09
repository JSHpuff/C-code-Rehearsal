/*
    Variables:
        -> Allocated space in memory to store a value.
        -> Refer to variables's name to access the stored value.
        -> Declare what type of data storing.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    /* --------------------------------------------------------- */
    /* ======================= Variables ======================= */
    /* --------------------------------------------------------- */
    int x;          // Declare type and name
    x = 123;        // Init value
    int y = 32;     // Declare + Init

    /* -------------------------------------------------------- */
    /* ====================== Data Types ====================== */
    /* -------------------------------------------------------- */
    char grade = "C";           // Character                %c
    char name[] = "Andrew";     // Array of character       %s
    char f = 100;               // 1 byte (-128 to +127)    %d or %c
    unsigned char g = 255;      // 1 byte (0 to 255)        %d or %c

    // Floating point number 
    float gpa = 2.05;               // 4 bytes  %f
    double d = 3.141592653589793;   // 8 bytes  %1f

    // Integer
    short int h = 32767;            // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;   // 2 bytes (0 to 65,535)        %d

    // (-2,147,483,648 to +2,147,483,647)
    int age = 21;                                       // 4 bytes  %d

    // (0 to +4,294,967,295)
    unsigned int k = 4294967295L;                       // 4 bytes  %u

    // (-9 quintillion to +9 quintillion)
    long long int l = 9223372036854775807;              // 8 bytes  %lld

    // (0 to +18 quintillion)
    unsigned long long int m = 18446744073709551615U;   // 8 bytes  %llu

    return 0;
}