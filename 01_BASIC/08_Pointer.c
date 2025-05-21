#include <stdio.h>
#include <string.h>

void Pointer_Function_1(int a){     // Local variable
    a = a+1;
    printf("Address of variable a in Pointer_Function_1 = %d\n", &a);
}

void Pointer_Function_2(int *p){
    *p = (*p) + 1;
}

void Pointer_Function_Array_1(int* A, int size){
    int i, sum = 0;
    for(i = 0; i<size; i++){
        A[i] = 2*A[i];
    }
}

void Pointer_Function_Char_1(char* A){
    while(*A != '\0'){
        printf("%c",*A);
        A++;
    }
    printf("\n");
}

int main(void){
    /* ------------------------------------------------------ */
    /* ===================== Pointer 1 ====================== */
    /* ------------------------------------------------------ */
    int a = 14, *p;
    p = &a;                 // &a: address of a
    printf("%d\n", p);
    printf("%d\n", *p);     // *p: value at address pointed by p
    printf("%d\n", &p);     // &p: address of p
    printf("%d\n", a);
    printf("%d\n", &a);
    *p = 12;                // dereferencing
    printf("a = %d\n", a);
    a = 20;
    printf("%d\n", p);
    printf("%d\n", *p);

    /* ------------------------------------------------------ */
    /* ================ Pointer Memory Size ================= */
    /* ------------------------------------------------------ */
    printf("Size of integer is %d by bytes\n", sizeof(int));
    printf("Addresss p+1 is %d\n", p+1); // p+1 is 2006
    printf("Value at address p+1 is %d\n", *(p+1));

    /* ------------------------------------------------------ */
    /* =============== Pointer Address Copy ================= */
    /* ------------------------------------------------------ */
    // Void pointer - Genric pointer
    void *p0;
    p0 = p;
    printf("Address = %d\n", p0);

    /* ------------------------------------------------------ */
    /* ================= Pointer & Pointer ================== */
    /* ------------------------------------------------------ */
    int x = 5;
    int* p = &x;
    int** q = &p;
    int*** r = &q;

    printf("x %d\n", x);
    printf("&x %d\n", &x);
    printf("p %d\n", p);
    printf("*p %d\n", *p);
    printf("q %d\n", q);
    printf("*q %d\n", *q);
    printf("*(*q) %d\n", *(*q));
    printf("r %d\n", r);
    printf("*r %d\n", *r);
    printf("*(*r) %d\n", *(*r));
    printf("*(*(*r)) %d\n", *(*(*r)));

    /* ------------------------------------------------------ */
    /* ================== Pointer Array 1 =================== */
    /* ------------------------------------------------------ */
    int A[] = {2, 4, 5, 8 ,1};
    int i;
    for(i = 0; i < 5; i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A+i));
    }

    /* ------------------------------------------------------ */
    /* ================ Pointer Function 1 ================== */
    /* ------------------------------------------------------ */
    int a;
    a = 10; // Local variable
    Pointer_Function_1(a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d", a);

    /* ------------------------------------------------------ */
    /* ================ Pointer Function 2 ================== */
    /* ------------------------------------------------------ */
    int a;
    a = 10;
    printf("&a = %d\n",&a);
    Pointer_Function_2(&a);
    printf("a = %d\n", a);

    /* ------------------------------------------------------ */
    /* ============== Pointer Array Function ================ */
    /* ------------------------------------------------------ */
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]);
    int i;
    Pointer_Function_Array_1(A, size);
    for(i = 0; i< size; i++){
        printf("%d ", A[i]);
    }

    /* ------------------------------------------------------ */
    /* ============ Pointer Character Function ============== */
    /* ------------------------------------------------------ */
    char A[20] = "Hello";
    print(A);

    return 0;
}