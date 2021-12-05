//Write a C program to calculate the Area and Circumference of a circle.

#include <stdio.h>
float PI = 3.14;

int main() {
    int radius;

    //User Defined Numbers.
    printf("Enter The Radius Number: ");
    scanf("%d", &radius);

    //calculate Area
    printf("Area of a Circle: %f\n", PI * radius * radius);

    //calculate Circumference
    printf("Circumference of a Circle: %f\n", 2 * PI * radius);

    return 0;
}


