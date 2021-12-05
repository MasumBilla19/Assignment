//19. Write a C program to add two numbers using function.

#include <stdio.h>

int add (int x, int y) {
    return x + y;
}

int main() {
    int a, b;

    //user defined number
    printf("Enter Two Number: ");
    scanf("%d %d", &a, &b);

    printf("Addition of Two Number is: %d\n", add(a, b));

    return 0;
}


