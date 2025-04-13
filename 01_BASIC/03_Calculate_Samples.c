#include <stdio.h>

int main(void) {
    /* ------------------------------------------------------ */
    /* ======================= Circle ======================= */
    /* ------------------------------------------------------ */
    const double PI = 3.14159;
    double radius, circumference, area;

    printf("\nEnter the radius of a circle: ");
    scanf("%1f", &radius);
    printf("\nRadius: %1f", radius);

    circumference = 2*PI*radius;
    area = PI*radius*radius;

    printf("\nCircumference: %1f", circumference);
    printf("area: %1f", area);

    /* ------------------------------------------------------ */
    /* ===================== Temperature ==================== */
    /* ------------------------------------------------------ */
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or in (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);
    if (unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.lf", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp -32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.lf", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measurement", temp);
    }

    return 0;
}