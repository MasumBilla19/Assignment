//15. Write a C program to check whether the string is palindrome or not.

#include <stdio.h>

int main() {
    char str[1000];
    int i, count=0;

    //User Defined String
    printf("Enter  the string: ");
    gets(str);

    for (i = 0; i < strlen(str) / 2; i++) {
        if (str[i] == str[strlen(str) - i - 1]) count++;
    }

    (count == i) ? printf("string is palindrome \n") : printf("string is not palindrome");

    return 0;
}


