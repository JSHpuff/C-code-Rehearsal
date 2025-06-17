#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

int main(){
    /* --------------------------------------------------------- */
    /* ======================== Comment ======================== */
    /* --------------------------------------------------------- */
    // This is a comment
    /*
        This is a 
        multiline
        comment
    */
    /* escape sequence = character combination consisting of a backslash \
                         followed by a letter or combination of digits.
                         They specify actions within a line or string of text.
                         \n = newline
                         \t = tab
                         \\ = display \
                         \' = display '
                         \" = display "
    */
    
    /* -------------------------------------------------------- */
    /* ====================== User Input ====================== */
    /* -------------------------------------------------------- */
    // Declares a character array (string) named 's'
    // with space for 100 characters
    char s[100];
    /* %[^\n]
        is a scanset that reads all characters
        until it encounters a newline \n.s
        This allows reading strings with spaces.
    */
    /* %*c
        reads and discards the next cahracter
        (the newline character in this case).
        The asterisk (*) means
        "don't assign this to any variable."
    */
    scanf("%[^\n]%*c", s);
    printf("Hello, World!\n%s", s);

    char name[NAME_LEN];
    int age, ch;

    printf("\nWhat's your name?");
    
    /*  fgets
        This reads input from the keyboard (stdin)
        into the name array

        It will read up to 24 cahracters
        (leaving space for the null terminator)
        or until a newline is encountered.

        Unlike scanf("%s"), 
        fgets() captures spaces and the newline character.
    */
    // fgets(name, 25, stdin);


    /*
        This replaces the newline character that 
        fgets() includes at the end with a null terminator
    */
    // name[strlen(name) - 1] = '\0';

    /**Better Codes */
    if (fgets(name, sizeof(name), stdin) != NULL) {
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] == '\0';
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    } else {
        fprintf(stderr, "Error reading name.\n");
        return 1;
    }

    printf("\nHow old are you?");

    /*  scanf()
        when using to read a vlaue into a primitive data type
        like int, needs to:
        Pass the memory address where the value should be stored

        The & operator gets the memory address (pointer),
        which tells scanf() where to write the data.
    */
    // scanf("%d", &age);

    /**Better Codes */
    /**
     * Adding a space before %d tells scanf to skip all leading whitespace, 
     * including newlines.
     * This can make the manual buffer flush unnecessary 
     * if your input flow is controlled.
     */
    if (scanf(" %d", &age) != 1) {
        fprintf(stderr, "Invalid input for age.\n");
        return 1;
    }

    /* Clear stdin in case of extra characters after the number */
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old.", age);

    /* --------------------------------------------------------- */
    /* ========================= Print ========================= */
    /* --------------------------------------------------------- */
    int i;
    i = 1;
    printf("\nC Program Rehersal %d \n", i);
    // Uncomment this line to pause the program before exiting
    //system("pause"); 

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like pizza\" - Abraham Lincoln probably\n");

    /* ---------------------------------------------------------- */
    /* ====================== Print Format ====================== */
    /* ---------------------------------------------------------- */
    /* Format specifier %
        defined and formats a type of data to be display

        %c = character
        %s = string (array of characters)
        %f = float
        %lf = double
        %d = integer

        %.1 = decimal precision
        %1 = minimum field width
        %- = left align
    */
    float item1 = 5.75;
    printf("Item 1: $%8.2f\n", item1);

    return 0;
}