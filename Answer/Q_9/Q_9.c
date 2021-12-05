//9. Write a C program to print a Fibonacci series up to “n”th term.

#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    //User Defined Number
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("%d Fibonacci series is %llu", n, fibonacci(n));

    return 0;
}


