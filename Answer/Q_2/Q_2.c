//2. Write a C program to determine whether the given number is Odd or Even.

#include <stdio.h>

int main() {
    int n;

    //User defined Number
    printf("Enter a One Number: ");
    scanf("%d", &n);

    //Odd or Even
    printf("%d", n);
    printf((n & 1) ? " is the Odd Number\n" : " is the Even Number\n");

    return 0;
}


