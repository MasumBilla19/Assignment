//5. Write a C program to convert temperature from Fahrenheit to Celsius and vise versa.

#include <stdio.h>

int main() {
    float celsius,fahrenheit;

    // Reads temperature in fahrenheit
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);

    // Fahrenheit to celsius conversion formula
    celsius=(fahrenheit - 32)*5/9;
    // Print the result
    printf("\nCelsius = %.3f",celsius);

    return 0;
}


