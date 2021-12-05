//12. Write a C program to swap two numbers using pointer

#include <stdio.h>

int main() {
    int x, y, *a, *b, temp;

    //User Defined Number
    printf("Enter the two value: ");
    scanf("%d%d", &x, &y);

    printf("Before Swapping: X = %d, Y = %d\n", x, y);

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("After Swapping: X = %d, Y = %d\n", x, y);

    return 0;
}


