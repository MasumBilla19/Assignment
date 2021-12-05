//3. Write a C program to determine the largest number among three user defined numbers.

#include <stdio.h>

int main() {
    int a, b, c;

    //Three User Defined Numbers.
    printf("Enter Three Number: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b) && (a > c)) {
        //a is largest
        printf("%d is the Largest Number\n", a);

    } else if((b > a) && (b > c)) {
        //b is largest
        printf("%d is the Largest Number\n", b);

    } else {
        //c is largest
        printf("%d is the Largest Number\n", c);
    }

    return 0;
}


