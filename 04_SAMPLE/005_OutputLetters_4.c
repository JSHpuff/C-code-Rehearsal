#include <stdio.h>

int main(void) {
    char c;

    printf("Please input u or l,\ 
        u indicate upper letters,\ 
        l indicate lower letters: ")
    
    scanf("%c", &c);

    if (c == 'U' || c == 'u'){
        for (c = 'A'; c <= 'Z'; ++c) {
            printf("%c ", c);
        }
    }else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; ++c) {
            printf("%c ", c);
        }
    }else printf("Error! Invalid input!");

    return 0;
}