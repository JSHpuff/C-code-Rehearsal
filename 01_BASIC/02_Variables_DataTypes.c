/*
    Variables:
        -> Allocated space in memory to store a value.
        -> Refer to variables's name to access the stored value.
        -> Declare what type of data storing.
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

    /* -------------------------------------------------------- */
    /* ========================= Array ======================== */
    /* -------------------------------------------------------- */
    /* array:
        data structer store many values in same data type.
    */

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
    printf("$%.2lf\n", prices[4]);

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }

    /* 2D array:
        an array, where each element is an entire array
        useful if you need a matrix, grid, or table of data
    */
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }
    
    /* array of strings */
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

    /* -------------------------------------------------------- */
    /* ========================= String ======================= */
    /* -------------------------------------------------------- */
    char string1[] = "Bro";
    char string2[] = "Code";

    // converts a string to lowercase
    strlwr(string1);

    // converts a string to uppercase
    strupr(string1);

    // appends string2 to end of string1
    strcar(string1, string2);

    // appends n characters from string2 to end of string1
    strncar(string1, string2, 1);

    // copy string2 to string1
    strcpy(string1, string2);

    // copy n characters from string2 to string1
    strncpy(string1, string2, 2);

    // sets all characters of string1 to a given character
    strset(string1, '?');

    // sets first n characters of string1 to a given character
    strnset(string1, 'x', 1);

    // reverses a string
    strrev(string1);

    // returns string length as int
    int result = strlen(string1);

    // string compare all characters, 0: same, 1: diff
    int result = strcmp(string1, string2);

    // string compare n characters
    int result = strncmp(string1, string2, 1);

    // string compare all (ignore case)
    int result = strcmpi(string1, string1);

    // string compare n characters (ignore case)
    int result = strncmpi(string1, string1, 1);

    // printf("%s", string1);

    /* -------------------------------------------------------- */
    /* ==================== Character Array =================== */
    /* -------------------------------------------------------- */
    char C[4];
    C[0] = 'J';
    C[1] = '0';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0'; //--> Null character
    printf("%s\n", C);

    return 0;
}