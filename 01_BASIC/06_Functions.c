#include <stdio.h>

/* Function prototype: 
        Funciton declaration, w/o a body, before main()
        Ensures that calls to a funciton are made with the correct arguments
       Important notes:
        Many C compiler do not check for parameter matching
        Missing arguments will result in unexpected behavior
        A function prototype causes the compiler to flag an error if arguments are missing
       Advantages:
        1. Easier to navigate a program
        2. Help with debugging
        3. Commonly used in header files
*/
double function_2(double);      // function prototype

int function_1(int x){
    return x+3;
}

void function_3(char x[], int y){
    printf("\nHappy birthday Dear %s!", x);
    printf("\nYou are %d years old!", y);
}

void function_4(int *n) {
    *n += 1;
}

int main(void) {
    /* ------------------------------------------------------ */
    /* ===================== Function 1 ===================== */
    /* ------------------------------------------------------ */
    print("%d\n", function_1(4));

    /* ------------------------------------------------------ */
    /* ===================== Function 2 ===================== */
    /* ------------------------------------------------------ */
    int N;
    scanf("%d", &N);
    printf("%f\n", function_2(N));

    /* ------------------------------------------------------ */
    /* ===================== Function 3 ===================== */
    /* ------------------------------------------------------ */
    char name[] = "Bro";
    int age = 21;
    function_3(name, age);

    /* ------------------------------------------------------ */
    /* ===================== Function 4 ===================== */
    /* ------------------------------------------------------ */
    int a = 3;
    function_4(&a);
    printf("%d", a);

    return 0;
}

double function_2(double x){
    return x/2;
}