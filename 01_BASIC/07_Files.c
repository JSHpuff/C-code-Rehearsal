#include <stdio.h>

int main() {
    /* ------------------------------------------------------ */
    /* ==================== Files Write ===================== */
    /* ------------------------------------------------------ */
    FILE *pF = fopen("test.txt", "w");
    fprintf(pF, "\nSpongebob Squarepants");
    fclose(pF);

    if (remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }
    
    return 0;
}