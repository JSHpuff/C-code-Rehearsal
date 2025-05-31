#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s;
 
int main()
{
    printf("Input info:\n");
 
    printf("name: ");
    scanf("%s", s.name);
 
    printf("number: ");
    scanf("%d", &s.roll);
 
    printf("grade: ");
    scanf("%f", &s.marks);
 
 
    printf("Show info:\n");
 
    printf("name: ");
    puts(s.name);
 
    printf("number: %d\n",s.roll);
 
    printf("grade: %.1f\n", s.marks);
 
    return 0;
}