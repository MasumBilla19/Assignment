//6. Write a C program to check whether the given number is prime number or not.

#include <stdio.h>

int main() {
    int n, flag = 0;

    //User Defined Number;
    printf("Enter a Number ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; ++i){
        //non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1) {
        printf("%d is Prime Number\n", n);
    } else {
        (!flag) ?
            printf("%d is a Prime Number\n", n) :
            printf("%d is Not a Prime Number\n", n);
    }

    return 0;
}


