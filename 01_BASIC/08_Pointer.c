#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int* Pointer_Function_Return(int* a, int* b){
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
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
    /* ============== Pointer Array Function ================ */
    /* ------------------------------------------------------ */
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;
    // print A -- A[0]'s address. ex: 200
    // print *A -- 2
    // *(A+i) is same as A[i]
    // (A+i) is same as &A[i]

    /* ------------------------------------------------------ */
    /* ============ Pointer Character Function ============== */
    /* ------------------------------------------------------ */
    char A[20] = "Hello";   // string gets stored in the space for array
    char *A = "Hello";      // string gets stored as compile time constant
    print(A);

    /* ------------------------------------------------------ */
    /* ======== Pointer & Multi-dimensional arrays ========== */
    /* ------------------------------------------------------ */
    int B[2][3];
    int (*A)[3] = B; // B[0] -> 1-D arrays of 3 integers
    // print B+1 -> &B[1]
    // print *(B+1) -> B[1] -> &B[1][0]
    // print *(B+1)+2 -> B[1]+2 -> &B[1][2]
    // B[i][j] = *(B[i]+j) = *(*(B+i) + j)

    /* ------------------------------------------------------ */
    /* ============ Pointer as Function return ============== */
    /* ------------------------------------------------------ */
    int x = 2, y = 4;
    int* z = Add(&x, &y);
    print("Sum = %d\n", *z);

    return 0;
}