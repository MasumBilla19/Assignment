//8. Write a C program to calculate whether the given year is leap year or not.

#include <stdio.h>

int main() {
    int year;

    //User Defined Year
    printf("Enter a Year: ");
    scanf("%d", &year);

    (((year % 4 == 0) && (year %100 != 0)) || (year % 400 == 0)) ? printf("%d is a Leap Year\n", year) : printf("%d is not a Leap Year\n", year);

    return 0;
}


