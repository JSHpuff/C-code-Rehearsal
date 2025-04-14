#include <stdio.h>
#include <string.h>

struct struct_sample_1{
    char name [12];
    int score;
};

typedef struct{
    char name[25];
    char password[25];
    int id;
} struct_sample_2;

struct struct_sample_3{
    char name[12];
    float gpa;
};

int main() {
    /* ------------------------------------------------------ */
    /* ====================== Sample 1 ====================== */
    /* ------------------------------------------------------ */
    struct struct_sample_1 player1;
    struct struct_sample_1 player2;
    strcpy(player1.name, "Bro");
    player1.score = 4;
    strcpy(player2.name, "Bra");
    player2.score = 6;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);
    printf("\n%s\n", player2.name);
    printf("%d\n", player1.score);

    /* ------------------------------------------------------ */
    /* ============== Sample 2 - Typedef Struct ============= */
    /* ------------------------------------------------------ */
    struct_sample_2 user1 = {"Bro", "password", 1234};
    struct_sample_2 user2 = {"Ba", "pass1", 4312};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    /* ------------------------------------------------------ */
    /* =============== Sample 3 - Array Struct ============== */
    /* ------------------------------------------------------ */
    struct struct_sample_3 student1 = {"Anna", 3.0};
    struct struct_sample_3 student2 = {"Pasion", 2.5};
    struct struct_sample_3 student3 = {"Sandy", 4.0};
    struct struct_sample_3 student4 = {"SS", 2.0};
    struct struct_sample_3 students[] = {
        student1, student2, student3, student4
    };

    for(int i = 0; i < sizeof(students)/ sizeof(students[0]); i++){
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}