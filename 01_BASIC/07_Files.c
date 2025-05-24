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

    /* ------------------------------------------------------ */
    /* ===================== Files Read ===================== */
    /* ------------------------------------------------------ */
    FILE *fp = NULL;
    char buff[255];
    
    fp = fopen("text.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff);
    fclose(fp);
    
    return 0;
}