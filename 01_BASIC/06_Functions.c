#include <stdio.h>

double function_2(double);

int function_1(int x){
    return x+3;
}

void function_3(char x[], int y){
    printf("\nHappy birthday Dear %s!", x);
    printf("\nYou are %d years old!", y);
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

    return 0;
}

double function_2(double x){
    return x/2;
}