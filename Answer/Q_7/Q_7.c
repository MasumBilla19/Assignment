//7. Write a C program to calculate the factorial of an integer.

#include <stdio.h>

//factorial function
long int factorial(int n) {
    if (n >= 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;

    //User Defined Number
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %ld", n, factorial(n));

    return 0;
}


