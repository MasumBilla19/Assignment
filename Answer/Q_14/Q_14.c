//14. Write a C program that reads a character from keyboard and prints it in the reverse case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char x;

    //User Defined Character
    printf("Enter an alphabet : ");
    x = getchar();

    if (islower(x)) {
        printf("Alphabet Upper Case is: ");
        putchar(toupper(x));
    } else {
        printf("Alphabet Lower Case is: ");
        putchar(tolower(x));
    }

    return 0;
}


