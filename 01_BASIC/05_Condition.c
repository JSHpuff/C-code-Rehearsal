#include <stdio.h>

int main() {
    /* ------------------------------------------------------ */
    /* ======================= Switch ======================= */
    /* ------------------------------------------------------ */
    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades\n");
    }

    /* ------------------------------------------------------ */
    /* ========================= If ========================= */
    /* ------------------------------------------------------ */
    int grade;

    printf("Please enter the grade: ");
    scanf("%d", &grade);

    if (grade >= 60) {
        printf("Pass");
    } else{ printf("Fail"); }

    /* ------------------------------------------------------ */
    /* ========================= If ========================= */
    /* ------------------------------------------------------ */
    int side1, side2, side3;

    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle\n");
    }
    if(side1 == side2 && side2 == side3) {
        printf("Regular triangle\n");
    }
    if(side1 *side1 + side2 *side2 == side3 *side3 ||
       side1 *side1 + side3 *side3 == side2 *side2 ||
       side2 *side2 + side3 *side3 == side1 *side1) {
        printf("Rectangular triangle\n");
    }

    /* ------------------------------------------------------ */
    /* ======================= While ======================== */
    /* ------------------------------------------------------ */
    int number;
    int sum = 0;
    int count = 0;
    float average;

    printf("Please enter the number (0: quit): \n");
    scanf("%d", &number);

    while (number != 0) {
        sum += number;
        count += 1;
        scanf("%d", &number);
    }
    average = (float) sum / count;
    printf("The average is %f\n", average);

    return 0;
}