//13. Write a C program to calculate the length of a String.

#include <stdio.h>

int main() {
    char str[100];

    //User Defined String
    printf("Enter a string: ");
    gets(str);

    printf("Length of the String: %d\n", strlen(str));

    return 0;
}


