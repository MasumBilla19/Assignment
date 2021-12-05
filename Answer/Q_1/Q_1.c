//1. Write a C program to add, subtract, multiply and divide two user defined numbers.

#include <stdio.h>

int main() {
    int a, b;

    // User Defined Numbers
    printf("Enter Two Integer Number: ");
    scanf("%d %d", &a, &b);

    //addition
    printf("Two Number Addition is: = %d\n", a + b);

    //subtract
    printf("Two Number Subtract is: = %d\n", a - b);

    //multiply
    printf("Two Number Multiply is: = %d\n", a * b);

    //divide
    printf("Two Number Divide is: = %d\n", a / b);

    return 0;
}


